#include <iostream>
using namespace std;

class stack{
private:
    int top = 0;
    int length;
    int stackArray[];
public:
    stack();
    stack(int length);

    void push(int input);
    int pop();
    bool IsEmpty();
    int Top();
};

stack::stack(int length){
    int stackArray[length];
}

void stack::push(int input){
    stackArray[top] = input;
    top++;
}

int stack::pop(){
    top -= 1;
    return stackArray[top];
}

bool stack::IsEmpty(){
    return (top == 0);
}

int stack::Top(){
    return top;
}

int main(){
    stack s();
    s.push(5);
    cout << s.pop();
}

// undone