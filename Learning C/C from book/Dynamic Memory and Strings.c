//
//  Dynamic Memory and Strings.c
//  Learning C
//
//  Created by Adam Campbell on 12/04/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* FullName;
    asprintf (&FullName, "Albert Einstein");
    printf("%s \n", FullName);
    
    free(FullName);
}