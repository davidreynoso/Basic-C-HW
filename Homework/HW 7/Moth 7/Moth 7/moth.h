/*
PIC 10A Homework 7, moth.h
Author: David Reynoso
UID: 705607919
Discussion Section: 3B
Date: 11/23/2022
*/

#ifndef MOTH_H
#define MOTH_H

class Moth {
    public:
        Moth(double initial_position);
        void move_to_light(double light_position);
        double get_position() const;
        
    private:
        double position;
        
};


#endif
