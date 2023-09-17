#include"MyQueue.h"
#include<iostream>
using namespace std;

    MyQueue::MyQueue() {
        size = 0;
        last = -1;
        arr = new int[size];
    }
    int MyQueue::getfirst() {
        size--;
        int g = arr[0];
        last--;
        arrh = new int[size];
        for (int i = 0; i <= last; i++) {
            arrh[i] = arr[i + 1];
        }
        delete[]arr;
        arr = arrh;
        cout << "value stollen from the start of queue : " << g << endl;
        return g;
    }
    void MyQueue::pushback(int value) {
        if (last == size - 1) {
            size++;
            arrh = new int[size];
            for (int i = 0; i <= last; i++) {
                arrh[i] = arr[i];
            }
            delete[]arr;
            arr = arrh;
        }
        last++;
        arr[last] = value;
    }
    MyQueue::~MyQueue() {
        delete[]arr;
        cout << "\n\n\n \t--===Queue deleted!===-- \n\n\n";
    }
    void MyQueue::print() {

        cout << endl << "    \t";
        for (int i = 0; i < size; i++) {
            cout << "_____";
        }
        cout << endl << "\t--> ";
        for (int i = size - 1; i >= 0; i--) {
            if (i != 0) {
                cout << arr[i] << " , ";
            }
            else cout << arr[i] << "   ";
        }

        cout << " --> " << endl << "\t";
        for (int i = 0; i < size; i++) {
            cout << "_____";
        }
        cout << "\n\n";
    }

    
