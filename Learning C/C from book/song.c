//
//  song.c
//  Learning C
//
//  Created by Adam Campbell on 15/04/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>
#include "song.h"

Song createSong (char* title, int length, int year)
{
    Song mySong;
    mySong.title = title;
    mySong.lengthInSeconds = length;
    mySong.yearRecorded    = year;
    displaySong (mySong);
    return mySong;
}

void displaySong (Song mySong)
{
    printf ("'%s' is %i seconds long ", mySong.title, mySong.lengthInSeconds);
    printf ("and was made in %i\n", mySong.yearRecorded);
}