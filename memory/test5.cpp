#include <iostream>

using namespace std;

//���ؾֲ���������
//int& test_1() {
//    int a = 10;  //�ֲ�����
//    return a;    //���ܷ����ֲ���������
//}

//������̬��������
int& test_2() {      //����ʹ��
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