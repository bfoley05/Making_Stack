#ifndef GENSTACK_H
#define GENSTACK_H

#include<iostream>
using namespace std;

class GenStack{
    public:
        GenStack();
        GenStack(int maxSize);
        ~GenStack();

        void push(char data);
        char pop();
        char peek(); //or top

        int getSize();
        bool isEmpty();
        bool isFull();
    private:
        int top;
        int mSize;
        char *myArray;
};


#endif