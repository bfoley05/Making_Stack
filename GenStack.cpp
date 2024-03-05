#include "GenStack.h"

GenStack::GenStack(){
    mSize = 64;
    top = -1;
    myArray = new char[mSize];
}

GenStack::GenStack(int maxSize){
    mSize = maxSize;
    top = -1;
    myArray = new char[mSize];
}

GenStack::~GenStack(){
    cout << "Stack destroyed" << endl;
    delete[] myArray;
}

// void GenStack::push(char data){
//     if(isFull()){
//         throw runtime_error("Stack is full");
//     }
//     top++;
//     myArray[top] = data;
// }


void GenStack::push(char data){
    if(isFull()){
        cout << "Stack is expanding to make more room" << endl;
        char *temp = new char[2*mSize];
        for(int i = 0; i <mSize; ++i){
            temp[i] = myArray[i];
        }
        mSize *=2;
        delete[] myArray;
        myArray = temp;
    }
    top++;
    myArray[top] = data;
}

char GenStack::pop(){
    if(isEmpty()){
        throw runtime_error("Stack is empty");
    }
    return myArray[top--];
}

char GenStack::peek(){
    if (isEmpty()){
        throw runtime_error("Stack is empty");
    }
    return myArray[top];
}

bool GenStack::isFull(){
    return (top == mSize -1);
};

bool GenStack::isEmpty(){
    return (top == -1);
}

int GenStack::getSize(){
    return top+1;
}

