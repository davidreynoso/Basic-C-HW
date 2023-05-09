/*
PIC 10A Homework 7, moth.cpp
Author: David Reynoso
UID: 705607919
Discussion Section: 3B
Date: 11/23/2022
*/

#include "moth.h"

Moth::Moth(double initial_position)
{
    // lets us start with a given initial position
    position = initial_position;
}
void Moth::move_to_light(double light_position)
{
    // gives our position to be halfway between light and old position (sort of average)
    position = ((position + light_position)/2.0);
}
double Moth::get_position() const
{
    return position;
}
