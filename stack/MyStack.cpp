#include "MyStack.h"
#include<iostream>

using namespace std;
    MyStack::MyStack() {
         size = 0;
         top = -1;
         arr = new int[size];
    }
    void MyStack::pushtop(int value) {
        if (top == size - 1) {
            size++;

            arrh = new int[size];
            for (int i = 0; i <= top; i++) {
                arrh[i] = arr[i];
            }
            delete[]arr;


            arr = arrh;
        }
        top++;
        arr[top] = value;
    }

    int MyStack::getSIZE() {
        return size;
    }
    void MyStack::print() {
        cout << endl;
        for (int i = size - 1; i >= 0; i--) {
            cout << "\t|\t" << arr[i] << "\t|\t" << endl;
        }
        cout << "\t|_______________|\t" << endl;
    }
    int MyStack::gettop() {
        size--;
        int g = arr[top];
        top--;
        arrh = new int[size];
        for (int i = 0; i <= top; i++) {
            *(arrh + i) = arr[i];
        }
        delete[]arr;
        arr = arrh;
        cout << "value stollen from the top of stack : " << g << endl;
        return g;
    }
    int MyStack::mx() {
        int max = arr[top];
        for (int i = top; i >= 0; i--) {
            if (max < arr[i])max = arr[i];
        };
        return max;
    }
    int MyStack::idfound(int a) {

        for (int i = 0; i <= top; i++) {
            if (a == arr[i])return i;
        }

    }
    MyStack::~MyStack() {
        cout << "\n\n\n \t--===Stack deleted!===-- \n\n\n";
        delete[] arr;

    };
    bool MyStack::etcheck() {
        return top == -1;
    }




