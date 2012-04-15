//
//  Final Programme.c
//  Learning C
//
//  Created by Adam Campbell on 15/04/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "math_functions.h"
#include "song.h"
#include "Final Programme.h"

// global variables
int yearCount = 12;
int* allYears;

// utility functions


int main (int inputCount, char* inputValues[] ){
    int songCount = (inputCount - 1);
    if ( songCount > 0) {
        printf( "You entered %i song names\n", songCount);
    
    }
    else {
        printf("You didn't enter any names.\n");
        exit(1);
    }
    
    setupYears();
    sranddev();
    int randomNumber = rand() % 500;
    // create array of song count sizes
    Song allSongs [songCount];
    int songLengths [ songCount];
    
    int i;
    for (i = 0; i < songCount; i++){
        // choose random lengths
        int length = rand() % 500;
        int year = randomSongYear();
        char songName = *inputValues[i+1];
        allSongs[i] = createSong (&songName, length, year);
        songLengths[i] = length;
    }
    int combinedLength = sum (songLengths, songCount);
    printf("The total lengths of all songs is: %i seconds\n", combinedLength);
    float songLenthsAsFloat[songCount];
    for ( i=0; i < songCount; i++) {
        songLenthsAsFloat[i] = songLengths[i];
    }
    float averageLength = average(songLenthsAsFloat, songCount);
    printf("The average length is %.2f seconds\n", averageLength);
    free(allYears);
    
    }


void setupYears() {
    allYears = malloc (sizeof(int) * yearCount);
    int oneYear = 2000;
    int i;
    for (i=0; i<yearCount; i++) {
        oneYear++;
        allYears[i] = oneYear;
    }
}
    
int randomSongYear () {
    int yearIndex = rand() % (yearCount - 1);
    int year = allYears[yearIndex];
    return year;
}