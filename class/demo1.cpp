#include <iostream>

using namespace std;

//���һ��Բ�࣬��Բ���ܳ�
const double Pi = 3.14;

//class�������һ���࣬�������������
class Circle {
    //����Ȩ��
public:                 //����Ȩ��

    //����
    int m_r;            //�뾶

    //��Ϊ
    double calculateZC() const {
        return 2*Pi*m_r;
    }
};

int main() {
    //ͨ��Բ�������������Բ(����)
    Circle c1{};
    //��Բ�����Ը�ֵ
    c1.m_r = 10;
    cout<<"Բ���ܳ�Ϊ"<<c1.calculateZC()<<endl;
    return 0;
}