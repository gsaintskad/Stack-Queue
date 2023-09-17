#pragma once
class MyStack
{
public:
    MyStack();
    void pushtop(int value);
    int getSIZE();
    void print();
    int gettop();
    int mx();
    int idfound(int a);
    ~MyStack();
    bool etcheck();
private:

    int size;
    int top;
    int* arr;
    int* arrh;


};


