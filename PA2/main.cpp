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
    quickSort(j, 0, 99);
    cout<<"time is:"<<time(&end)<<endl;
    
   cout<<"SORTED"<<endl;
    for(int i = 0 ;i<100;i++)
    {
        cout<<i<<": "<<j[i]<<endl;
    }
    //Portion 2
    
    //Portion 3
}







