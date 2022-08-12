#ifndef ALGO_BOUBLE_SORT_H__
#define ALGO_BOUBLE_SORT_H__

class bouble {
public:
    bouble();
    bouble(int array[10]){
        int reg = 0;
        for(int i=0;i<10;i++){ // range
            for(int j=10;j>=i;j--){
                if (array[j] > array[j+1]){
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