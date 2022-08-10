#include <iostream>
using namespace std;

int f(int input){
    if(input == 1 || input == 0){
        return 1;
    }
    return f(input-1) + f(input-2);
}

int main(){
    cout << f(20);
    return 0;
}