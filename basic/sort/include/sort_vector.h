namespace sort_vector{
    std::vector<int> bouble(std::vector<int> ar){
        int reg = 0;
        for(size_t i=0;i<ar.size();i++){ // range
            for(size_t j=ar.size()-2;j>=i;j--){
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

    std::vector<int> insertion(std::vector<int> ar){
        int reg, key;
        for(size_t i=0; i<ar.size();i++){ // range to sorted
            key = ar[i];
            reg = i;
            while(reg > 0 && ar[reg-1] > key){ // range to value
                ar[reg] = ar[reg-1];
                reg--;
            }
            ar[reg] = key;
        }
        return ar;
    }

    std::vector<int> selection(std::vector<int> ar){
        int reg;
        for(size_t i=0;i<ar.size();i++){
            int min = i;
            for(size_t j=i+1;j<ar.size();j++){
                if(ar[j]<ar[min]){
                    min = j;
                }
            }
            if (min != i){
                reg = ar[i];
                ar[i] = ar[min];
                ar[min] = reg;
            }
        }
        return ar;
    }
}
