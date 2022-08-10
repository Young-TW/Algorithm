---
tags: 筆記, 演算法
---

# 排序演算法 以C++實現

[TOC]

## 氣泡排序 bouble sort

```cpp
#include <iostream>
using namespace std;

int main(){
    int array[10];

    for (int i=0;i<10;i++){
        cout << "input num" << i+1 << " : \n";
        cin >> array[i];
    }

    cout << "排序前\n";
    for(int i=9;i>0;i--){
        cout << array[i] << ", ";
    }

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

    cout << "\n排序後\n";
    for(int i=9;i>0;i--){
        cout << array[i] << ", ";
    }

    return 0;
}
```

## 選擇排序 selection sort

```cpp
#include <iostream>
using namespace std;

int main() {
    int array[10];

    for (int i=0;i<10;i++){
        cout << "input num" << i+1 << " : \n";
        cin >> array[i];
    }

    cout << "排序前\n";
    for(int i=0;i<10;i++){
        cout << array[i] << ", ";
    }

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

    cout << "\n排序後\n";
    for(int i=0;i<10;i++){
        cout << array[i] << ", ";
    }

    return 0;
}
```

## 插入排序 insertion sort

```cpp
#include <iostream>
using namespace std;

int main(){
    int array[10];

    for (int i=0;i<10;i++){
        cout << "input num" << i+1 << " : \n";
        cin >> array[i];
    }

    cout << "排序前\n";
    for(int i=0;i<10;i++){
        cout << array[i] << ", ";
    }

    int reg, key;
    for(int i=0; i<10;i++){ // range to sorted
        key = array[i];
        reg = i;
        while(reg > 0 && array[reg-1] > key){ // range to value
            array[reg] = array[reg-1];
            reg--;
        }
        array[reg] = key;
    }

    cout << "\n排序後\n";
    for(int i=0;i<10;i++){
        cout << array[i] << ", ";
    }

    return 0;
}
```