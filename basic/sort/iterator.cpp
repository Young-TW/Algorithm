#include <iostream>
#include <vector>
#include <iterator>
#include "./include/sort_iterator.h"
using namespace std;

void printArray(vector<int> ar, vector<int>::iterator h){
    for(h=ar.begin();h!=ar.end();h++){
        cout << *h << ", ";
    }
    cout << endl;
}

int main() {
    vector<int> ar={5,3,2,6,1,4,7,0,9,8};
    vector<int>::iterator h;

    cout << "before sort\n";
    printArray(ar, h);
    cout << "after sort\n";
    printArray(ar, insertion(h));
    system("pause");
    return 0;
}