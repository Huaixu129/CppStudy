#include <iostream>
#include <string>
using namespace std;

//访问权限
//public 类内可以访问，类外可以访问
//protected 类内可以访问，类外不能访问 子类可以访问父类的内容
//private 类内可以访问，类外不能访问   子类可以访问父类的内容

class Person {
public:
    string m_name;
protected:
    string m_car;
private:
    int m_password;
public:
    void set() {
        m_name = "张三";
        m_car = "奔驰e300l";
        m_password = 123456;
    }
};

int main() {
    Person p1;
    p1.m_name = "李四"; //只能访问这一个属性
    p1.set();
    cout<<p1.m_name;
    return 0;
}
