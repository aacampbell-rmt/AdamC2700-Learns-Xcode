//
//  Pointers.c
//  Learning C
//
//  Created by Adam Campbell on 11/04/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

// uses pointer variables

#include <stdio.h>

int main()
{
    int number = 4;
    
    // declare a pointer variable by putting an * after the type declaration and an & before the variable it points to
    
    int* numberpointer = &number;
    
    printf("Number: %i\n", number);
    
    //placing variable in print requires ampersand to say 'value of' and not memory location
    
    printf("Number pointer: %i\n", *numberpointer);
    
    number = 16;
    
    // pointer value changes with variable change
    
    
    printf("Number: %i\n", number);
    printf("Number pointer: %i\n", *numberpointer);
}