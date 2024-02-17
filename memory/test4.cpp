#include <iostream>

using namespace std;

//ֵ����
void swap_1(int a, int b) {  //�ββ���ı�ʵ��
    int temp = a;
    a = b;
    b = temp;
}

//��ַ����
void swap_2(int* a, int* b) {  //�βλ�ı�ʵ��
    int temp = *a;
    *a = *b;
    *b = temp;
}

//���ô���
void swap_3(int &a, int &b) {  //�βλ�ı�ʵ��
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10;
    int b = 20;
    swap_1(a,b);
    cout<<a<<endl<<b<<endl;

    swap_2(&a,&b);
    cout<<a<<endl<<b<<endl;

    swap_3(a,b);
    cout<<a<<endl<<b<<endl;
    return 0;
}