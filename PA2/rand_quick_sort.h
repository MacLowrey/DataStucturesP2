//
//  rand_quick_sort.h
//  PA2
//
//  Created by Jon Lowrey on 10/25/15.
//  Copyright © 2015 Jon Lowrey. All rights reserved.
//
#include "util.h"
#ifndef rand_quick_sort_h
#define rand_quick_sort_h


int random_partition(int* arr, int start, int end)
{
    srand(time(NULL));
    int pivotIdx = start + rand() % (end-start+1);
    int pivot = arr[pivotIdx];
    swap(arr[pivotIdx], arr[end]); // move pivot element to the end
    pivotIdx = end;
    int i = start -1;
    
    for(int j=start; j<=end-1; j++)
    {
        if(arr[j] <= pivot)
        {
            i = i+1;
            swap(arr[i], arr[j]);
        }
    }
    
    swap(arr[i+1], arr[pivotIdx]);
    return i+1;
}

void random_quick_sort(int* arr, int start, int end)
{
    if(start < end) {
        int mid = random_partition(arr, start, end);
        random_quick_sort(arr, start, mid-1);
        random_quick_sort(arr, mid+1, end);
    }
}
#endif /* rand_quick_sort_h */
