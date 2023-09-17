#pragma once
class MyQueue
{
public:
    MyQueue();
    int getfirst();
    void pushback(int value);
    ~MyQueue();
    void print();
private:
    int a;
    int size = 0;
    int last = -1;
    int* arr = new int[size];
    int* arrh;

};