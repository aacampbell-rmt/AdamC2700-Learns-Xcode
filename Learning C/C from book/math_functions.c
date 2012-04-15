//
//  math_functions.c
//  Learning C
//
//  Created by Adam Campbell on 09/04/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

// shows how to use a header file

#include <stdio.h>
// includes header file with functions defined there in .h
#include "math_functions.h"

int sum (int values [], int count)
{
    int i;
    int total = 0;
    for ( i = 0; i < count; i++){
        total = total + values[i];
    }
    return total;
}

float average (float values[], int count)
{
    int i;
    int total = 0;
    for ( i = 0; i < count; i++){
        total = total + values[i];
    }
    float average = (total / count);
    return average;
}