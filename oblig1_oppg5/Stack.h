//
// Created by Sondre on 23.02.2018.
//

#ifndef OBLIG1_OPPG5_STACK_H
#define OBLIG1_OPPG5_STACK_H

#include "Node.h"
class Stack {
public:

    /**
     * De virituelle metodene som StackArray klassen arver
     */
    virtual bool push(int value) = 0;
    virtual bool pop() = 0;
    virtual bool empty() = 0;
    virtual Node* getTop() = 0;
    virtual int size() = 0;


};


#endif //OBLIG1_OPPG5_STACK_H
