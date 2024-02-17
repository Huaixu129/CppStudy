#include <iostream>

using namespace std;

int main() {
    //两种引用方式

    int a = 10;
    int &b = a;
    b = 12;
    cout<<a<<endl;
    cout<<b<<endl<<&b<<endl<<&a<<endl;

    int c = 11;
    int * d = &c;
    * d = 12;
    cout<<d<<endl<<*d<<endl;
    cout<<c;
    return 0;
}