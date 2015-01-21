//
//  Pit.h
//  Project_One
//
//  Created by Anirudh Dayal on 1/10/15.
//  Copyright (c) 2015 CS 31. All rights reserved.
//

#ifndef __Project_One__Pit__
#define __Project_One__Pit__

#include <stdio.h>
#include "globals.h"

#include "History.h"

class Player;
class Snake;

class Pit
{
public:
    // Constructor/destructor
    Pit(int nRows, int nCols);
    ~Pit();
    
    // Accessors
    int     rows() const;
    int     cols() const;
    Player* player() const;
    int     snakeCount() const;
    int     numberOfSnakesAt(int r, int c) const;
    void    display(string msg) const;
    History& history();
    
    // Mutators
    bool   addSnake(int r, int c);
    bool   addPlayer(int r, int c);
    bool   destroyOneSnake(int r, int c);
    bool   moveSnakes();
    
private:
    int     m_rows;
    int     m_cols;
    Player* m_player;
    Snake*  m_snakes[MAXSNAKES];
    History m_history;
    int     m_nSnakes;
};


#endif /* defined(__Project_One__Pit__) */
