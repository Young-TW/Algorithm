#ifndef ALGO_BOUBLE_SORT_H__
#define ALGO_BOUBLE_SORT_H__
#include <vector>

class bouble {
public:
    bouble();
    bouble(std::vector<int> array){
        int reg = 0;
        for(size_t i=0;i<array.size();i++){ // range
            for(size_t j=array.size()-2;j>=i;j--){
                if(array[j] > array[j+1]){
                    reg = array[j];
                    array[j] = array[j+1];
                    array[j+1] = reg;
                    // swap(array[j],array[j+1]);
                }
            }
        }
    }
};

#endif