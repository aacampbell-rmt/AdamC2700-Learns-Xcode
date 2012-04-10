//
//  Loop.c
//  Learning C
//
//  Created by Adam Campbell on 10/04/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

// This programme uses an array and a loop

#include <stdio.h>

int values[5] = {12,5,24,56,7};
int total = 0;
int i;

int main () {

    for (i=0; i < 5; i++){
    total += values[i];
        printf("%i \n", total);
    }
}