#include "GenStack.h"

int main(int argc, char **argv){
    GenStack *myStack = new GenStack(5);

    try{
        myStack->push('f');
        myStack->push('o');
        myStack->push('o');
        myStack->push('b');
        myStack->push('a');

        cout << "PEAK: " << myStack->peek() << endl;
        cout << "POP: " << myStack->pop() << endl;
        cout << "PEAK: " << myStack->peek() << endl;

        myStack->push('a');
        myStack->push('r');
        myStack->push('!');

        while(!myStack->isEmpty()){
            cout << "POP IN LOOP:" << myStack->pop() << endl;
        }

    }catch(runtime_error &e){
        cout << e.what() << endl;
    }
    delete myStack;
    return 0;
}