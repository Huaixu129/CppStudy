#include <iostream>

using namespace std;

int func(int a, int b = 20, int c = 30) { //从第一个有默认参数的地方开始，后面的每一个参数都必须有参数
    return a + b + c;
}

int main() {
    cout<<func(5)<<endl;
    cout<<func(5,15)<<endl;
    cout<<func(5, 15, 25)<<endl;
    return 0;
}