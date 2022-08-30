#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> array){
    for(int i=0;i<array.size();i++){
        cout << array[i] << ", ";
    }
    cout << endl;
}

vector<int> bouble(vector<int> array){
    int reg = 0;
    for(int i=0;i<array.size();i++){ // range
        for(int j=array.size()-2;j>=i;j--){
            if(array[j] > array[j+1]){
                reg = array[j];
                array[j] = array[j+1];
                array[j+1] = reg;
                // swap(array[j],array[j+1]);
            }
        }
    }
    return array;
}


int main() {
    vector<int> array={5,3,2,6,1,4,7,0,9,8};
    array.push_back(1);
    array.push_back(2);
    array.push_back(6);
    array.push_back(4);
    array.push_back(5);
    array.push_back(9);
    array.push_back(7);
    array.push_back(8);
    array.push_back(0);
    array.push_back(3);

    cout << "array size =" << array.size() << endl;

    cout << "before sort\n";
    printArray(array);
    cout << "after sort\n";
    array = bouble(array);
    printArray(array);
    system("pause");
    return 0;
}