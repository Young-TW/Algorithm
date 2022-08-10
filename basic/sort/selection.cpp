#include <iostream>
using namespace std;

void sort(int array[10]){
    int reg;
    for(int i=0;i<10;i++){
        int min = i;
        for(int j=i+1;j<10;j++){
            if(array[j]<array[min]){
                min = j;
            }
        }
        if (min != i){
            reg = array[i];
            array[i] = array[min];
            array[min] = reg;
        }
    }
}

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
    sort(array);
    cout << "after sort\n";
    printArray(array);
    return 0;
}