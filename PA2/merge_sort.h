//
//  merge_sort.h
//  PA2
//
//  Created by Jon Lowrey on 10/12/15.
//  Copyright © 2015 Jon Lowrey. All rights reserved.
//

#ifndef merge_sort_h
#define merge_sort_h
void mergeArray(int array[], int left, int mid, int right)
{
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    // create temp arrays
    int lefty[n1], righty[n2];
    
    // Copy data to temp arrays lefty[ ] and righty[ ]
    for(i = 0; i < n1; i++)
        lefty[i] = array[left + i];
    for(j = 0; j < n2; j++)
        righty[j] = array[mid + 1 + j];
    
    // Merge the temp arrays back into array[ ]
    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2)
    {
        if (lefty[i] <= righty[j])
        {
            array[k] = lefty[i];
            i++;
        }
        else
        {
            array[k] = righty[j];
            j++;
        }
        k++;
    }
    
    // Copy the remaining elements of lefty[ ], if there are any
    while (i < n1)
    {
        array[k] = lefty[i];
        i++;
        k++;
    }
    
    // Copy the remaining elements of righty[ ], if there are any 
    while (j < n2)
    {
        array[k] = righty[j];
        j++;
        k++;
    }
}
void mergeSort (int array[ ],  int left,  int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        
        mergeSort (array, left, mid);
        mergeSort (array, mid + 1, right);
        mergeArray(array, left, mid, right);
    }
}

#endif /* merge_sort_h */
