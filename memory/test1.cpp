#include <iostream>
using namespace std;

//全局变量
int A = 10;//4210692
int B = 11;//4210696

//const修饰的全局变量
const int C = 12; //4214888
const int D = 13; //4214892

int main() {
    //局部变量
    int a = 1; //6422284
    int b = 2;//6422280
    int c = 3;//6422276

    //静态变量,存储在全局区
    static int d = 10;//4210700
    static int e = 11;//4210704

    //const修饰的局部变量
    const int f = 12; //6422272
    const int g = 13; //6422268
    cout<<&f<<endl<<&g<<endl;

    //字符串常量
    cout<<&"hello world"<<endl;//4214885
    cout<<&"hhhh"<<endl; //4214908

    cout<<&a<<endl<<&b<<endl<<&c<<endl<<&A<<endl<<&B<<endl<<&d<<endl<<&e<<endl;

    cout<<&C<<endl<<&D<<endl;

    return 0;
}