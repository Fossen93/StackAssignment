//
// Created by Sondre on 23.02.2018.
//

#ifndef OBLIG1_OPPG5_STACKARRAY_H
#define OBLIG1_OPPG5_STACKARRAY_H

#include "Stack.h"
#include "Node.h"

class StackArray: public Stack {
public:
    /**
     * Tom konstruktør
     */
    StackArray();

    /**
     * Konstruktør
     * @param maxSize - maks antall tall(noder) i stabelen
     */
    StackArray(int maxSize);

    /**
     * Destruktør
     */
    ~StackArray();

    /**
     * Legger til ett nytt tall(node) til stabelen
     * @param value - Verdien til tallet
     * @return - true dersom vellykket
     */
    bool push(int value);

    /**
     * tar ut øverste tll(node) fra stabelen
     * @return - true dersom vellykket
     */
    bool pop();

    /**
     * Sjekker om stabelen er tom
     * @return - true dersom stabelen er tom
     */
    bool empty();

    /**
     * Finner antall verdier i stabelen
     * @return - antall verdier
     */
    int size();

    /**
     * Finner tallet(noden) på toppen aav stabelen
     * @return topp tallet(noden)
     */
    Node* getTop();

    /**
     * get og det metoder
     */
    void setTop(Node *newTop);

    int getNumNodes();
    void setNumNodes(int size);

    int getMaxSize();

private:
    int maxSize;
    Node* top;
    int numNodes;
};


#endif //OBLIG1_OPPG5_STACKARRAY_H
