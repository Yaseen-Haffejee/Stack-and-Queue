#include <iostream>
#include <vector>

using namespace std;


class Stack {
    vector < int > myStack;

    public:
    //Add to the top of the stack
    void push(int value){
        myStack.insert(myStack.begin(), value);
    }
    // Remove from the top of the stack
    void pop(){
        int val = myStack[0];
        myStack.erase(myStack.begin());

    }
    // View what is at the top of the stack
    int peek(){
        int val = myStack[0];
        return val;
    }
    // Print all the elements of the stack
    void Print(){
        for(int i = 0; i < myStack.size(); i++){
            cout<< myStack[i]<<endl;
        }
    }

};


int main(){

    Stack s =  Stack();

    for(int i = 0; i <10;i++){
        s.push(i);
    }
    s.Print();
    
    return 0;
}