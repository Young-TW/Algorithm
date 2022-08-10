#include <iostream>
using namespace std;

void sort(int array[10]){
    int reg = 0;
    for(int i=9;i>0;i--){
        for (int j=1;j<=i;j++){
            if (array[j] > array[j-1]){
                reg = array[j];
                array[j] = array[j-1];
                array[j-1] = reg;
            }
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