#include <iostream>

using namespace std;

//����ĳ�ʼ��������

//���캯�� ���г�ʼ��
class Person{
public:
    string name;
    int age;
    bool sex{};
    //1.1�����캯��
    //û�з���ֵ ��дvoid ���������� �����в��� �������� ��������ʱ�����캯�����Զ����ã�����ֻ����һ��
    Person() {
        cout<<"���캯���ĵ���"<<endl;
    }
    Person(int Age) {
        age = Age;
        cout<<"�вι��캯��"<<endl;
    }
    //1.2����������
    //û�з���ֵ ��дvoid ���������� �����в��� �������� ��������ʱ�������������Զ����ã�����ֻ����һ��
    ~Person() {
        cout<<"���������ĵ���"<<endl;
    }
    //�������캯��
    Person(const Person &p) {
        //�����������������Կ������������
        age = p.age;
    }
};

void test_01() {
    Person p ;      //��ջ�ϵ����ݣ�����ִ������ͷ��������
}
//����

void test_02() {
    //1.���ŷ�
    Person p;
    Person p1(19);     //�в�
    Person p2(p1);   //����

    //2.��ʾ��
    Person p3;
    Person p4 = Person(18);
    Person p5 = Person(p4);
    //�������� //ע�⣬��Ҫʹ�ÿ������캯������ʼ����������
    Person(10); //���캯��ִ��������ִ����������

    //��ʽת����
    Person p6 = 10; //�в�
    Person p7 = p6; //����
}
int main() {
    test_01();
    Person p1;   //��������������ִ����������
    system("pause");
    return 0;
}