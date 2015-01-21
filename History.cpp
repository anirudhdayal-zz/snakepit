//
//  History.cpp
//  Project_One
//
//  Created by Anirudh Dayal on 1/10/15.
//  Copyright (c) 2015 CS 31. All rights reserved.
//
#include "History.h"
#include "globals.h"
#include "Pit.h"

History::History(int nRows, int nCols)
{
    m_r = nRows;
    m_c = nCols;
    for (int x = 1; x <= m_r; x++)
    {
        for (int y = 1; y <= m_c; y++)
        {
            grid[x-1][y-1] = '.';
        }
    }
}

bool History::record(int r, int c)
{
    if (r > MAXROWS || c > MAXCOLS || c < 1 || r < 1)
        return false;
    if(grid[r-1][c-1] == 'Z')
        grid[r-1][c-1] = 'Z';
    else
    {
        if(grid[r-1][c-1] == '.')
            grid[r-1][c-1] = 'A';
        else
            grid[r-1][c-1] += 1;
    }
    return true;
}

void History::display() const
{
    clearScreen();
    for (int x = 1; x <= m_r; x++)
    {
        for (int y = 1; y <= m_c; y++)
        {
            cout << grid[x-1][y-1];
        }
        cout << endl;
    }
    cout << endl;
}
