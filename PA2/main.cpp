#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string>
#include <algorithm>
#include "rand_quick_sort.h"
#include "insertion_sort.h"
#include "merge_sort.h"
#include "util.h"

using namespace std;

void randomArray(int* arr,int sizeOfArray)
{
    for(int i =0;i<sizeOfArray;i++)
    {
        arr[i] = randomGen(100);
       // cout<<i<<": "<<arr[i]<<endl;
    }


};




int main(int argc, const char * argv[]) {
    srand(time(NULL));
    int elements;
    cout<<"How many elements in the array?"<<endl;
    cin>>elements;
    for(int apple = 0;apple<1000;apple++){
    int j[elements];
    randomArray(j, elements);
    int k[elements];//array to be quicksorted
    int l[elements];//array to be insertion sorted
    for(int i=0;i<elements;i++)
    {
        k[i]=j[i];
        l[i]=j[i];
    }
      //  cout<<endl<<"--------------------------------------------"<<endl;
    
    //Portion 1 Quicksort
    std::chrono::high_resolution_clock::time_point time1 = std::chrono::high_resolution_clock::now();
    quickSortR(k, 0, elements-1);
    std::chrono::high_resolution_clock::time_point time2 = std::chrono::high_resolution_clock::now();
    long long  durationQ = std::chrono::duration_cast<std::chrono::microseconds>( time2 - time1 ).count();
   
    }
    
}







