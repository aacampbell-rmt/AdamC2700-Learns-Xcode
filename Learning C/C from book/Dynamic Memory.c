//
//  Dynamic Memory.c
//  Learning C
//
//  Created by Adam Campbell on 12/04/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

// #include <stdio.h>
// #include <stdlib.h>

// learn to use dynamic memory

// int i;


// int main ()
// {
    // creating a pointer
    
//    int* numbers;
    // create pointer for first memory location to allow to free memory
//    int* numbersstart = numbers;
    // cause the memory location to have a size of 10 memory slots
    
//    numbers = malloc( sizeof(int) * 10);
    
    // the first memory slot contains the int value 280, use * to signify adding info
//    *numbers = 1;
    
    // move the variable to next memory slot
    
//    numbers++;
    
    // add to location 2
    
//    *numbers = 2;
    
    // move to 5th value
    
//    numbers += 4;
    
//    for (i = 0; i < 11; i++) {
//        numbers += i;
//        *numbers = i;
//        printf("%i\n", *numbers);
//    }
    // use pointer to first memory location to free memory
//    free (numbersstart);
//}