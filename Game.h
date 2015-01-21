//
//  Game.h
//  Project_One
//
//  Created by Anirudh Dayal on 1/10/15.
//  Copyright (c) 2015 CS 31. All rights reserved.
//

#ifndef __Project_One__Game__
#define __Project_One__Game__

#include <stdio.h>
#include "Pit.h"


class Game
{
public:
    // Constructor/destructor
    Game(int rows, int cols, int nSnakes);
    ~Game();
    
    // Mutators
    void play();
    
private:
    Pit* m_pit;
};

#endif /* defined(__Project_One__Game__) */
