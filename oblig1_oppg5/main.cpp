#include <iostream>

using namespace std;

#include "Node.h"
#include "StackArray.h"
#include "Stack.h"
int main() {

    StackArray stabel;

    Stack *s = &stabel;

    s->push(9);
    s->push(5);
    s->push(7);

    cout<<"s->push(9);"<<endl;
    cout<<"s->push(5);"<<endl;
    cout<<"s->push(7);"<<endl;
    cout<<endl;

    cout<<"Overste node er: "<<s->getTop()->getValue()<<endl;
    cout<<"Antall noder er: "<<s->size()<<endl;

    s->pop();

    cout<<endl;

    cout<<"s->pop;"<<endl;

    cout<<endl;

    cout<<"Overste node er na: "<<s->getTop()->getValue()<<endl;
    cout<<"Antall noder er na: "<<s->size()<<endl;


}