#include <iostream>

using namespace std;

//设计一个圆类，求圆的周长
const double Pi = 3.14;

//class代表设计一个类，后面跟的是名称
class Circle {
    //访问权限
public:                 //公共权限

    //属性
    int m_r;            //半径

    //行为
    double calculateZC() const {
        return 2*Pi*m_r;
    }
};

int main() {
    //通过圆类来创建具体的圆(对象)
    Circle c1{};
    //给圆的属性赋值
    c1.m_r = 10;
    cout<<"圆的周长为"<<c1.calculateZC()<<endl;
    return 0;
}