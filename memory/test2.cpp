#include <iostream>

using namespace std;

//ջ������ע������--��Ҫ���ؾֲ������ĵ�ַ
//ջ���������ɱ��������ٺ��ͷ�
//int * func() { //�ú���������
//    int a = 10;//�ֲ����� �����ջ����ջ���������ں���ִ������Զ��ͷ�
//    return &a;
//}

//���������ɳ���Ա�����ͷţ������ͷų�������ɲ���ϵͳ����
int * func() {
    //����new���Խ����ݿ��ٵ�����
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
    //�ͷ�����
    delete[] a;
}

int main() {
    int* p = func();
    cout<<*p<<endl;
    //�ֶ��ͷ�����
    delete p;
    //�ͷź��ٴε��ûᱨ��

    test1();
    return 0;
}