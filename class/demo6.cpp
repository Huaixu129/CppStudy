#include <iostream>
#include <cmath>
#define Pi 3.14
using namespace std;

//点类
class Point {
public:
    //设置x,y
    void set_x_y(int x, int y) {
        m_x = x;
        m_y = y;
    }
    //获取x
    int get_x() const {
        return m_x;
    }
    //获取y
    int get_y() const {
        return m_y;
    }
private:
    int m_x;
    int m_y;
};

//圆类
class Circle {
private:
    int m_r;
    Point m_center;
public:
    //设置半径
    void set_r(int r) {
        m_r = r;
    }
    //获取半径
    int get_r() const {
        return m_r;
    }
    //设置圆心
    void set_center(Point center) {
        m_center = center;
    }
    //获取圆心
    Point get_center() const {
        return m_center;
    }
};

//判断点和圆的位置关系
void judge(Point point, Circle circle) {
    if (exp2((double)(point.get_x()-circle.get_center().get_x())) + exp2((double)(point.get_y()-circle.get_center().get_y())) ==
            exp2((double)circle.get_r())) {
        cout<<"在圆上"<<endl;
    }
    else if (exp2((double)(point.get_x()-circle.get_center().get_x())) + exp2((double)(point.get_y()-circle.get_center().get_y())) <
             exp2((double)circle.get_r())) {
        cout<<"在圆内"<<endl;
    } else {
        cout<<"在圆外"<<endl;
    }
}

int main() {
    Point poi1{};
    Point poi2{};
    poi1.set_x_y(3,4);
    poi2.set_x_y(20,19);
    Circle cir{};
    cir.set_r(5);
    cir.set_center(poi1);
    judge(poi2,cir);
    return 0;
}