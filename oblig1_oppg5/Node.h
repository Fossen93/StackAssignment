//
// Created by Sondre on 23.02.2018.
//

#ifndef OBLIG1_OPPG5_NODE_H
#define OBLIG1_OPPG5_NODE_H


class Node {
public:
    /**
     * Tom konstruktør
     */
    Node();

    /**
     * Konstruktør
     * @param prevNode - Peker på noden under i stabelen
     * @param value - verdien/tallet til noden
     */
    Node(Node *prevNode, int value);

    /**
     * Destruktør
     */
    ~Node();

    /**
     * get og set metoder
     */
    Node* getPrevNode();
    int getValue();

    void setPrevNode(Node *node);
    void setValue(int value);

private:
    Node *prevNode;
    int value;
};


#endif //OBLIG1_OPPG5_NODE_H
