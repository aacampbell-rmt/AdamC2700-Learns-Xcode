//
//  main.c
//  Learning C
//
//  Created by Adam Campbell on 09/04/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>

int sum ( int x, int y);

int main (int argc, const char * argv[])
{
    int theSum = sum(10,11);
    printf( "Sum: %i\n", theSum );
}

int sum (int x, int y)
{
    return x + y;
}