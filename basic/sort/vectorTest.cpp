#include <iostream>
#include <vector>
#include "./include/bouble-vector.h"
using namespace std;

void printArray(vector<int> array){
    for(size_t i=0;i<array.size();i++){
        cout << array[i] << ", ";
    }
    cout << endl;
}

int main() {
    vector<int> array={5,3,2,6,1,4,7,0,9,8};

    cout << "before sort\n";
    printArray(array);
    bouble(array);
    cout << "after sort\n";
    printArray(array);
    return 0;
}