//
//  Address Book.c
//  Learning C
//
//  Created by Adam Campbell on 15/04/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>

int main ( int inputCount, char* inputValues[] )
{
    // don't count the proramme as a name
    // nameCount will be the total inputCount - 1
    
    int nameCount = (inputCount - 1);
    if (nameCount > 0) {
        printf("You entered %i names \n", nameCount);
    }
    else {
        printf("You didn't enter any names.\n");
    }
    
    // create array large enough for all the names
    char* formattedNames [nameCount];
    
    int i;
    for (i = 0; i < nameCount; i++) {
        
        // create a new formatted name using inputValues [i+1]
        char* currentName = inputValues[i+1];
        asprintf (&formattedNames[i], "Name %i: %s", i, currentName);        
    }
    
    // final result
    for (i = 0; i < nameCount; i++){
        printf ( "%s \n", formattedNames[i]);
    }
    
    for (i=0; i < nameCount; i++) {
        free (formattedNames[i] );
    }
}  