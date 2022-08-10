class Demo {
// 宣告 public 的成員
public:
    Demo();//沒有參數的建構函數
    Demo(int n1);//一個參數的建構函數
    Demo(int n1, int n2);//兩個參數的建構函數
    void set_a(int n);
    void set_b(int n);
    int get_a();
    int get_b();
    int do_something();
    
// 宣告 private 的成員
private:
    int a;
    int b;
};

// 沒有參數的建構函數
Demo::Demo() {
    set_a(1);
    set_b(1);
}

// 一個參數的建構函數
Demo::Demo(int n1) {
    set_a(n1);
    set_b(n1);
}

// 兩個參數的建構函數
Demo::Demo(int n1, int n2) {
    set_a(n1);
    set_b(n2);
}

int Demo::do_something() {
    // 改成呼叫 getter 成員函數
    return get_a() + get_b();
}

// setter 與 getter 成員函數
void Demo::set_a(int n) {
    a = n;
}

void Demo::set_b(int n) {
    b = n;
}

int Demo::get_a() {
    return a;
}

int Demo::get_b() {
    return b;
}