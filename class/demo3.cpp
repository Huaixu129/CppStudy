#include <iostream>
#include <string>
using namespace std;

//����Ȩ��
//public ���ڿ��Է��ʣ�������Է���
//protected ���ڿ��Է��ʣ����ⲻ�ܷ��� ������Է��ʸ��������
//private ���ڿ��Է��ʣ����ⲻ�ܷ���   ������Է��ʸ��������

class Person {
public:
    string m_name;
protected:
    string m_car;
private:
    int m_password;
public:
    void set() {
        m_name = "����";
        m_car = "����e300l";
        m_password = 123456;
    }
};

int main() {
    Person p1;
    p1.m_name = "����"; //ֻ�ܷ�����һ������
    p1.set();
    cout<<p1.m_name;
    return 0;
}
