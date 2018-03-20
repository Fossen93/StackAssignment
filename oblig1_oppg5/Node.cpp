//
// Created by Sondre on 23.02.2018.
//

#include "Node.h"

Node::Node() {}

Node::Node(Node *prevNode, int value) {
    Node::prevNode = prevNode;
    Node::value = value;
}

Node::~Node() {}

Node* Node::getPrevNode(){
    return prevNode;
}

int Node::getValue() {
    return value;
}

void Node::setPrevNode(Node *node) {
    prevNode = node;
}

void Node::setValue(int value) {
    Node::value = value;
}