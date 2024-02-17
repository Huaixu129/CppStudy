#include <iostream>

using namespace std;


//函数重载，函数名相同，提高函数的复用性

void func(int a) {
    a = 10;
    cout<<"这是函数1"<<a<<endl;
}

void func(int a, int b) {
    cout<<"这是函数2"<<a<<b<<endl;
}

int main() {
    func(1);
    func(1,2);
    return 0;
}