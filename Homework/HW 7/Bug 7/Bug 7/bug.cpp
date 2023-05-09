/*
PIC 10A Homework 7, bug.cpp
Author: David Reynoso
UID: 705607919
Discussion Section: 3B
Date: 11/23/2022
*/

#include "bug.h"

Bug::Bug(int initial_position)
{
    // lets us start with a given initial position, and start with our direction going to the right, I say if we are going right direction == 1, if we are to be going left, direction == 0
    position = initial_position;
    direction = 1;
}
void Bug::turn()
{
    // will switch direction values, if its 1, we switch to 0, that is if we are going right, we turn to go left, and vise versa
    if (direction == 1)
    {
        direction = 0;
    }
    else
    {
        direction = 1;
    }
}
void Bug::move()
{
    // if we are going right, we add 1 to our position, if going left, we subtract one (think of a number line)
    if (direction == 1)
    {
        position += 1;
    }
    else
    {
        position -= 1;
    }
}
int Bug::get_position() const
{
    return position;
}
