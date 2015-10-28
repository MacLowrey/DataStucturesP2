#include <iostream>
#include <array>
#include <math.h>
#include <cstdlib>
#include <string>
#include <algorithm>
#include "rand_quick_sort.h"
#include "quick_sort.h"
#include "util.h"

using namespace std;

void printArray (int arr[],int size)
{
    for(int j = 0; j<size;j++)
    {
        cout<<j<<": "<<arr[j]<<endl;
    }
}

void partialSort(int* arr, int sizeOfArray)
{
    quickSort(arr, 0, sizeOfArray);
    swap(&arr[0],&arr[sizeOfArray-1]);

}

void randomArray(int* arr,int sizeOfArray)
{
    for(int i =0;i<sizeOfArray;i++)
    {
        arr[i] = randomGen(100);
       //cout<<i<<": "<<arr[i]<<endl;
    }


};




int main(int argc, const char * argv[]) {
    srand(time(NULL));
    int elements;
    char partSort = NULL;
    bool partial = false;
    cout<<"How many elements in the array?"<<endl;
    cin>>elements;
    while(!partSort){
        cout<<"Would you like to test with partially Sorted Arrays?"<<endl<<"Please enter y or n (Yes/No)"<<endl;
        cin>>partSort;
        if(partSort== 'y')
        {
            partial=true;
        }
        else if(partSort== 'n')
        {
            break;
        }
        else
        {
            cout<<"Invalid Input, use lowercase letters and try again."<<endl;
            partSort=NULL;
        }
    }
    
    for(int apple = 0;apple<1000;apple++){
    int j[elements];
    randomArray(j, elements);
    int k[elements];//array to be quicksorted
    int l[elements];//array to be randomly quicksorted
    for(int i=0;i<elements;i++)//copy the original random array
    {
        k[i]=j[i];
        l[i]=j[i];
    }
        if(partial)
        {
            partialSort(k, elements);
            partialSort(l, elements);
        }
    
    //Portion 1 Quicksort
    std::chrono::high_resolution_clock::time_point time1 = std::chrono::high_resolution_clock::now();
    quickSort(k, 0, elements-1);
    std::chrono::high_resolution_clock::time_point time2 = std::chrono::high_resolution_clock::now();
    long long  durationQ = std::chrono::duration_cast<std::chrono::microseconds>( time2 - time1 ).count();
    //cout<<"QUICKSORT! DEBUG"<<endl;
   // printArray(k,elements);
    
    
    
    //Portion 2 Randomized Quicksort
    std::chrono::high_resolution_clock::time_point time3 = std::chrono::high_resolution_clock::now();
    quickSortR(l, 0, elements-1);
    std::chrono::high_resolution_clock::time_point time4 = std::chrono::high_resolution_clock::now();
    long long  durationQR = std::chrono::duration_cast<std::chrono::microseconds>( time4 - time3 ).count();
    //cout<<"QUICKSORTR! DEBUG"<<endl;
    //printArray(l,elements);
        
        cout<<durationQ<<" "<<durationQR<<endl;

    }
    
}







