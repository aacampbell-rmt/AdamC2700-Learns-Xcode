//
//  Dynamic Memory.c
//  Learning C
//
//  Created by Adam Campbell on 12/04/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// learn to use dynamic memory



int main ()
{
    // creating a pointer
    
    int* numbers;
    // cause the memory location to have a size of 10 memory slots
    
    numbers = malloc( sizeof(int) * 10);
    
}