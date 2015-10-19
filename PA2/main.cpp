#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string>
#include <algorithm>
#include "quick_sort.h"
#include "insertion_sort.h"
#include "merge_sort.h"
#include "util.h"

using namespace std;

void randomArray(int* arr,int sizeOfArray)
{
    for(int i =0;i<sizeOfArray;i++)
    {
        arr[i] = randomGen(100);
        cout<<i<<": "<<arr[i]<<endl;
    }


};

void quicksort(int *arr, int left, int right){
    int min = (left+right)/2;
    cout<<"QS:"<<left<<","<<right<<"\n";
    
    int i = left;
    int j = right;
    int pivot = arr[min];
    
    while(left<j || i<right)
    {
        while(arr[i]<pivot)
            i++;
        while(arr[j]>pivot)
            j--;
        
        if(i<=j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else{
            if(left<j)
                quicksort(arr, left, j);
            if(i<right)
                quicksort(arr,i,right);
            return;
        }
    }
}



int main(int argc, const char * argv[]) {
    time_t begin,end;
    srand(time(NULL));
    int size=100;
    int j[size];
    randomArray(j, size);
    for(int i = 0 ;i<20;i++)
    cout<<endl;
    
    //Portion 1
  // cout<<timelocal();
    //timelocal(timer);
    cout<<"time is:"<<time(&begin)<<endl;
    quicksort(j, 0, 99);
    cout<<"time is:"<<time(&end)<<endl;
    
/*    cout<<"SORTED"<<endl;
    for(int i = 0 ;i<100;i++)
    {
        cout<<j[i]<<endl;
    }*/
    //Portion 2
    
    //Portion 3
}







