#include <iostream>
#include <vector>
#include "./include/sort_vector.h"
using namespace std;

void printArray(vector<int> ar){
    for(size_t i=0;i<ar.size();i++){
        cout << ar[i] << ", ";
    }
    cout << endl;
}

std::vector<int> bouble(std::vector<int> ar){
    int reg = 0;
    for(size_t i=0;i<ar.size();i++){ // range
        for(size_t j=ar.size()-2;j>=i;j--){
            cout << j << " " << i <<endl;
            if(ar[j] > ar[j+1]){
                reg = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = reg;
                // swap(ar[j],ar[j+1]);
            }
        }
    }
    return ar;
}

int main() {
    vector<int> ar={5,3,2,6,1,4,7,0,9,8};

    cout << "before sort\n";
    printArray(ar);
    cout << "after sort\n";
    printArray(bouble(ar));
    system("pause");
    return 0;
}