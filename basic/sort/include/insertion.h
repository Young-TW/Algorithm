#ifndef ALGO_INSERTION_SORT_H__
#define ALGO_INSERTION_SORT_H__

class insertion {
public:
    insertion();
    insertion(int array[10]){
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
    }
};

#endif