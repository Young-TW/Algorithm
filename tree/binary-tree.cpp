#include <iostream>
using namespace std;

class BSTnode{
public:
    int Key;
    BSTnode *Left;
    BSTnode *Right;
    BSTnode *Parent;
};

int main(){
    BSTnode *root = NULL;
    root = Insert(root, 15);
}

// undone