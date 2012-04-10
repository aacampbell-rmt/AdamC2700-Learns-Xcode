//
//  Text Arrays Strings.c
//  Learning C
//
//  Created by Adam Campbell on 10/04/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>

// this programme introduces text strings in different ways

// use 'a' for values, and need '\0' to create string
// use "a" to create string, automatically adds a '\0' in array

// a character variable
char firstletter = 'a';

// an array of characters
char anotherword[] = {'A','d','a','m'};

// an array creating a string
// long winded 
// char stringarray[] = {'C','a','m','p','b','e','l','l','\0'};

//better
char stringarray[] = "Campbelll";

int main () {
    printf("My name is %c%c%c%c %s.\n", anotherword[0],anotherword[1],anotherword[2],anotherword[3], stringarray);
}

