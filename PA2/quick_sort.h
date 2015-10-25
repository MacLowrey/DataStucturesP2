//
//  quick_sort.h
//  PA2
//
//  Created by Jon Lowrey on 10/12/15.
//  Copyright © 2015 Jon Lowrey. All rights reserved.
//
#include "util.h"
#ifndef quick_sort_h
#define quick_sort_h


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


