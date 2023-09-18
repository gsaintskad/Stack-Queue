#include <iostream>
#include <ctime>
#include "MyStack.h"
#include "MyQueue.h"
using namespace std;



int main()
{
    srand(time(NULL));
    MyStack mystack;
    for (int i = 0; i < 10; i++) {
        mystack.pushtop(rand() % 100);
    }
    cout << "Max value in stack :\t" << mystack.mx() << "\t pops count you need to make to reach a max value :\t" << mystack.getSIZE() - mystack.idfound(mystack.mx());

    mystack.print();
    mystack.gettop();
    mystack.print();
    MyQueue Q;

    for (int i = 0; i < 15; i++) {
        Q.pushback(rand() % 100);
    }
    Q.print();

    Q.getfirst();
    Q.print();

    return 0;
}

