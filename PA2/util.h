//
//  util.h
//  PA2
//
//  Created by Jon Lowrey on 10/18/15.
//  Copyright © 2015 Jon Lowrey. All rights reserved.
//

#ifndef util_h
#define util_h

#include <cstdlib>
#include <time.h>
#include <chrono>

int randomGen(int bound)
{       int ret;
    ret = rand() % bound;
    return ret;
}
void swap(int* a, int* b)
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




#endif /* util_h */
