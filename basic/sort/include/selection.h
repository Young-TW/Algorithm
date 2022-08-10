#ifndef ALGO_SELECTION_SORT_H__
#define ALGO_SELECTION_SORT_H__

class selection {
public:
    selection();
    selection(int array[10]){
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
private:
};



#endif