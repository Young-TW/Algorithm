#include <iostream>
#include "./include/bouble.h"
using namespace std;

void printArray(int array[10]){
    for(int i=0;i<10;i++){
        cout << array[i] << ", ";
    }
    cout << endl;
}

bool sorted(int array[10]){
    for(int i=0;i<9;i++){
        if(array[i] > array[i+1])
            return false;
    }
    return true;
}

bool test(int array[10], int cases){
    bouble sortArray(array);
    return sorted(array);
}

int main() {
    int array[10];
    
    int a[5][10]={
        {1,3,2,6,4,5,9,7,8,0},
        {6,8,3,1,2,5,4,9,7,0},
        {7,0,3,6,2,1,8,9,5,4},
        {9,7,5,3,1,0,8,6,4,2},
        {1,0,2,9,3,8,4,7,5,6}
    };

    for(int cases=1;cases<6;cases++){
        for(int j=0;j<10;j++)
            array[j] = a[cases-1][j];
        if(test(array,cases)==true){
            cout << "Test " << cases << " passed\n";
        }
        else{
            cout << "Test " << cases << " failed\n";
            printArray(array);
        }
            
    }
    return 0;
}