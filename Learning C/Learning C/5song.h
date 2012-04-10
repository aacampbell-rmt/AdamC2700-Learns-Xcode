//
//  song.h
//  Learning C
//
//  Created by Adam Campbell on 09/04/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

// typedef creates new variable with two values

typedef struct {
    int lengthInSeconds;
    int yearRecorded;
} Song;

// function prototypes

Song make_song (int seconds, int year);
void display_song (Song theSong);