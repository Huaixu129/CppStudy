#include <iostream>

using namespace std;

//��������ʱ��Ĭ�ϲ�����ʵ��ʱ�Ͳ�����Ĭ�ϲ���

int func(int a, int b = 20, int c = 30) { //�ӵ�һ����Ĭ�ϲ����ĵط���ʼ�������ÿһ�������������в���
    return a + b + c;
}

int main() {
    cout<<func(5)<<endl;
    cout<<func(5,15)<<endl;
    cout<<func(5, 15, 25)<<endl;
    return 0;
}