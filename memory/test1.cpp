#include <iostream>
using namespace std;

//ȫ�ֱ���
int A = 10;//4210692
int B = 11;//4210696

//const���ε�ȫ�ֱ���
const int C = 12; //4214888
const int D = 13; //4214892

int main() {
    //�ֲ�����
    int a = 1; //6422284
    int b = 2;//6422280
    int c = 3;//6422276

    //��̬����,�洢��ȫ����
    static int d = 10;//4210700
    static int e = 11;//4210704

    //const���εľֲ�����
    const int f = 12; //6422272
    const int g = 13; //6422268
    cout<<&f<<endl<<&g<<endl;

    //�ַ�������
    cout<<&"hello world"<<endl;//4214885
    cout<<&"hhhh"<<endl; //4214908

    cout<<&a<<endl<<&b<<endl<<&c<<endl<<&A<<endl<<&B<<endl<<&d<<endl<<&e<<endl;

    cout<<&C<<endl<<&D<<endl;

    return 0;
}