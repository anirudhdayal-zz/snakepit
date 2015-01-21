//
//  History.h
//  Project_One
//
//  Created by Anirudh Dayal on 1/10/15.
//  Copyright (c) 2015 CS 31. All rights reserved.
//

#ifndef __Project_One__History__
#define __Project_One__History__

#include <stdio.h>
#include "globals.h"

class History
{
public:
    History(int nRows, int nCols);
    bool record(int r, int c);
    void display() const;
private:
    int m_r;
    int m_c;
    char grid[MAXROWS][MAXCOLS];//[MAXROWS][MAXCOLS] ;
};

#endif /* defined(__Project_One__History__) */
