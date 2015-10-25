//
//  quick_sort.h
//  PA2
//
//  Created by Jon Lowrey on 10/12/15.
//  Copyright © 2015 Jon Lowrey. All rights reserved.
//

#ifndef quick_sort_h
#define quick_sort_h
void swap(int * a, int* b)
{
    int holder = *a;
    *a = *b;
    *b = holder;
    return;
}

int partition (int arr[], int l, int h)
{
    int x = arr[h];
    int i = (l - 1);
    
    for (int j = l; j <= h- 1; j++)
    {
        if (arr[j] <= x)
        {
            i++;
            swap (&arr[i], &arr[j]);
        }
    }
    swap (&arr[i + 1], &arr[h]);
    return (i + 1);
}
void quickSort(int A[], int l, int h)
{
    if (l < h)
    {
        int p = partition(A, l, h); /* Partitioning index */
        quickSort(A, l, p - 1);
        quickSort(A, p + 1, h);
    }
}


#endif /* quick_sort_h */


