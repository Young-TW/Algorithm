#include <iostream>
#include "./include/insertion.h"
using namespace std;

void printArray(int array[10]){
    for(int i=9;i>0;i--){
        cout << array[i] << ", ";
    }
    cout << endl;
}

bool test(int array[10], int cases){
    int ans[10] = {0,1,2,3,4,5,6,7,8,9};
    insertion sortArray(array);
    if (array == ans)
        return true;
    return false;
}

int main() {
    int array[10];
    
    int a1[10]={1,3,2,6,4,5,9,7,8,0};
    int a2[10]={6,8,3,1,2,5,4,9,7,0};
    int a3[10]={7,0,3,6,2,1,8,9,5,4};
    int a4[10]={9,7,5,3,1,0,8,6,4,2};
    int a5[10]={1,0,2,9,3,8,4,7,5,6};
    for(int i=1;i<6;i++){
        array[10] = a1[10];
        test(array,i);
    }
    return 0;
}

// undone