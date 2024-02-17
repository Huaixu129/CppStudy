#include <iostream>

using namespace std;

//返回局部变量引用
//int& test_1() {
//    int a = 10;  //局部变量
//    return a;    //不能返还局部变量引用
//}

//返还静态变量引用
int& test_2() {      //可以使用
    static int a = 10;
    return a;
}

int main() {
    int a = test_2();
    cout<<a<<endl;

    test_2() = 1000; //666
    a = test_2();
    cout<<a<<endl;
    return 0;
}