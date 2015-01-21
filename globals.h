//
//  globals.h
//  Project_One
//
//  Created by Anirudh Dayal on 1/10/15.
//  Copyright (c) 2015 CS 31. All rights reserved.
//

#ifndef Project_One_globals_h
#define Project_One_globals_h

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

///////////////////////////////////////////////////////////////////////////
// Manifest constants
///////////////////////////////////////////////////////////////////////////

const int MAXROWS = 20;             // max number of rows in the pit
const int MAXCOLS = 40;             // max number of columns in the pit
const int MAXSNAKES = 180;          // max number of snakes allowed

const int UP    = 0;
const int DOWN  = 1;
const int LEFT  = 2;
const int RIGHT = 3;

///////////////////////////////////////////////////////////////////////////
//  Auxiliary function declarations
///////////////////////////////////////////////////////////////////////////

int decodeDirection(char dir);
bool directionToDeltas(int dir, int& rowDelta, int& colDelta);
void clearScreen();

#endif
