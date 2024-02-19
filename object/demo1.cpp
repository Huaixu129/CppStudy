#include <iostream>

using namespace std;

//对象的初始化和清理

//构造函数 进行初始化
class Person{
public:
    string name;
    int age;
    bool sex{};
    //1.1、构造函数
    //没有返回值 不写void 名称是类名 可以有参数 可以重载 创建对象时，构造函数会自动调用，并且只调用一次
    Person() {
        cout<<"构造函数的调用"<<endl;
    }
    Person(int Age) {
        age = Age;
        cout<<"有参构造函数"<<endl;
    }
    //1.2、析构函数
    //没有返回值 不写void 名称是类名 可以有参数 可以重载 对象销毁时，析构函数会自动调用，并且只调用一次
    ~Person() {
        cout<<"析构函数的调用"<<endl;
    }
    //拷贝构造函数
    Person(const Person &p) {
        //将传入对象的所有属性拷贝到这个对象
        age = p.age;
    }
};

void test_01() {
    Person p ;      //在栈上的数据，函数执行完后，释放这个对象
}
//调用

void test_02() {
    //1.括号法
    Person p;
    Person p1(19);     //有参
    Person p2(p1);   //拷贝

    //2.显示法
    Person p3;
    Person p4 = Person(18);
    Person p5 = Person(p4);
    //匿名对象 //注意，不要使用拷贝构造函数来初始化匿名对象
    Person(10); //构造函数执行完立刻执行析构函数

    //隐式转换法
    Person p6 = 10; //有参
    Person p7 = p6; //拷贝
}
int main() {
    test_01();
    Person p1;   //整个程序调用完后执行析构函数
    system("pause");
    return 0;
}