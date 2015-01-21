//
//  Player.h
//  Project_One
//
//  Created by Anirudh Dayal on 1/10/15.
//  Copyright (c) 2015 CS 31. All rights reserved.
//

#ifndef __Project_One__Player__
#define __Project_One__Player__

#include "globals.h"

class Pit;

class Player
{
public:
    // Constructor
    Player(Pit *pp, int r, int c);
    
    // Accessors
    int  row() const;
    int  col() const;
    int  age() const;
    bool isDead() const;
    
    // Mutators
    void   stand();
    void   move(int dir);
    void   setDead();
    
private:
    Pit*  m_pit;
    int   m_row;
    int   m_col;
    int   m_age;
    bool  m_dead;
};


#endif /* defined(__Project_One__Player__) */
