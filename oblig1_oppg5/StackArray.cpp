//
// Created by Sondre on 23.02.2018.
//
#include <iostream>
#include "StackArray.h"

StackArray::StackArray() {
    StackArray::maxSize = 10;
    StackArray::numNodes = 0;
}

StackArray::StackArray(int maxSize) {
    StackArray::maxSize = maxSize;
    StackArray::numNodes = 0;
}

StackArray::~StackArray() {}


bool StackArray::push(int value) {
    bool done = false;
    if (StackArray::size() == 0) {
        Node *newNode = new Node(nullptr, value);
        StackArray::setTop(newNode);
        StackArray::setNumNodes(1);
        done = true;
    }else if (StackArray::size() > 0 && StackArray::size() < StackArray::getMaxSize()){

        Node *newNode = new Node(StackArray::getTop(), value);
        StackArray::setTop(newNode);
        StackArray::setNumNodes(StackArray::getNumNodes() + 1);
        done = true;
    }

    return done;
}


bool StackArray::pop() {
    bool done = false;
    if(numNodes != 0) {
        Node *deleteNode = new Node(nullptr, 0);
        Node *temp = StackArray::getTop()->getPrevNode();
        StackArray::top->setPrevNode(deleteNode);
        StackArray::top = temp;
        StackArray::setNumNodes(StackArray::getNumNodes()-1);
        done = true;
    }

    return done;
}

bool StackArray::empty() {
    bool empty = false;
    if (StackArray::size()==0){
        empty = true;
    }

    return empty;
}

int StackArray::size() {
    return numNodes;
}


Node* StackArray::getTop(){
    return StackArray::top;
}

void StackArray::setTop(Node *newTop) {
    StackArray::top = newTop;

}

int StackArray::getNumNodes() {
    return numNodes;
}

void StackArray::setNumNodes(int size) {
    StackArray::numNodes = size;
}

int StackArray::getMaxSize() {
    return StackArray::maxSize;
}