#include <iostream>

using namespace std;

//栈区数据注意事项--不要返回局部变量的地址
//栈区的数据由编译器开辟和释放
//int * func() { //该函数不可用
//    int a = 10;//局部变量 存放在栈区，栈区的数据在函数执行完会自动释放
//    return &a;
//}

//堆区数据由程序员自主释放，若不释放程序结束由操作系统回收
int * func() {
    //利用new可以将数据开辟到堆区
    int* a = new int(10);
    return a;
}

void test1() {
    int * a = new int[10];
    for (int i=0; i<10; i++) {
        a[i] = i+100;
    }
    for (int i=0; i<10; i++) {
        cout<<a[i]<<endl;
    }
    //释放数组
    delete[] a;
}

int main() {
    int* p = func();
    cout<<*p<<endl;
    //手动释放数据
    delete p;
    //释放后再次调用会报错

    test1();
    return 0;
}