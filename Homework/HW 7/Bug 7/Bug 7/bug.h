/*
PIC 10A Homework 7, bug.h
Author: David Reynoso
UID: 705607919
Discussion Section: 3B
Date: 11/23/2022
*/

#ifndef BUG_H
#define BUG_H

class Bug {
    
    public:
        Bug(int initial_position);
        void turn();
        void move();
        int get_position() const;
    private:
        int position;
        int direction;
};

#endif
