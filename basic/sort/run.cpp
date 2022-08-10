#include <iostream>
#include "./include/selection.h"
using namespace std;

void printArray(int array[10]){
    for(int i=9;i>0;i--){
        cout << array[i] << ", ";
    }
    cout << endl;
}

int main() {
    int array[10];
    for (int i=0;i<10;i++){
        cout << "input num" << i+1 << " : \n";
        cin >> array[i];
    }
    cout << "before sort\n";
    printArray(array);
    selection sortArray(array);
    cout << "after sort\n";
    printArray(array);
    return 0;
}
