#include <iostream>
using namespace std;

class stack{
private:
    int top;
    int length;
    int *stack;
public:
    stack():top(-1),length(1){
        stack = new int[length];
    }

    void push(int input);
    int pop();
    bool IsEmpty();
    int Top();
    void DoubleLength();
};

void stack::DoubleLength(){
    length *= 2;
    int *newStack = new int[length];
    
}

void stack::push(int input){
    top++;
    stackArray[top] = input;
}

int stack::pop(){
    top -= 1;
    return stackArray[top];
}

bool stack::IsEmpty(){
    return (top == -1);
}

int stack::Top(){
    return top;
}

int main(){
    stack s();
    s.push(5);
    cout << "pop=" << s.pop() << " size=" << s.size() << " top=" << s.Top() << endl;
}

// undone