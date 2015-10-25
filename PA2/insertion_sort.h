//
//  insertion_sort.h
//  PA2
//
//  Created by Jon Lowrey on 10/12/15.
//  Copyright © 2015 Jon Lowrey. All rights reserved.
//

#ifndef insertion_sort_h
#define insertion_sort_h
void insertionSort(int *arr, int elements)
{
    int j, temp;
    for (int i = 0; i < elements; i++)
    {
        j = i;
        while (j > 0 && arr[j-1] > arr[j] )
        {
            temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j-1] = temp;
            j--;
        }
    }
}


#endif /* insertion_sort_h */
