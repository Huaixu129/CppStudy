#include <iostream>

using namespace std;


//�������أ���������ͬ����ߺ����ĸ�����

void func(int a) {
    a = 10;
    cout<<"���Ǻ���1"<<a<<endl;
}

void func(int a, int b) {
    cout<<"���Ǻ���2"<<a<<b<<endl;
}

int main() {
    func(1);
    func(1,2);
    return 0;
}