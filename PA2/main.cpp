#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string>
#include <algorithm>
#include "quick_sort.h"
#include "insertion_sort.h"
#include "util.h"

using namespace std;

void randomArray(int* arr,int sizeOfArray)
{
    for(int i =0;i<sizeOfArray;i++)
    {
        arr[i] = randomGen(100);
       // cout<<i<<": "<<arr[i]<<endl;
    }


}
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




int main(int argc, const char * argv[]) {
    srand(time(NULL));
    int elements;
    cout<<"How many elements in the array?"<<endl;
    cin>>elements;
    for(int apple = 0;apple<1000;apple++){
    int j[elements];
    randomArray(j, elements);
    int k [elements];//Array to be partially sorted then insertion sorted.
    int l[elements];//array to be insertion sorted
    for(int i=0;i<elements;i++)
    {   k[i]=j[i];
        l[i]=j[i];
    }
    partialSort(k,elements);

    //Portion 1 Insertion Sort
    std::chrono::high_resolution_clock::time_point time1 = std::chrono::high_resolution_clock::now();
    insertionSort(l, elements);
    std::chrono::high_resolution_clock::time_point time2 = std::chrono::high_resolution_clock::now();
    long long  durationI = std::chrono::duration_cast<std::chrono::microseconds>( time2 - time1 ).count();
    //Partially Sorted Portion
    std::chrono::high_resolution_clock::time_point time3 = std::chrono::high_resolution_clock::now();
    insertionSort(k, elements);
    std::chrono::high_resolution_clock::time_point time4 = std::chrono::high_resolution_clock::now();
    long long  durationIR = std::chrono::duration_cast<std::chrono::microseconds>( time4 - time3 ).count();
    cout<<durationI<<" "<<durationIR<<endl;
    }

    
}

//}





