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

int randomGen(int bound)
{       int ret;
    ret = rand() % bound;
    return ret;
}


#endif /* util_h */
