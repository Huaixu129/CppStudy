#include <iostream>
#include <cmath>
#define Pi 3.14
using namespace std;

//����
class Point {
public:
    //����x,y
    void set_x_y(int x, int y) {
        m_x = x;
        m_y = y;
    }
    //��ȡx
    int get_x() const {
        return m_x;
    }
    //��ȡy
    int get_y() const {
        return m_y;
    }
private:
    int m_x;
    int m_y;
};

//Բ��
class Circle {
private:
    int m_r;
    Point m_center;
public:
    //���ð뾶
    void set_r(int r) {
        m_r = r;
    }
    //��ȡ�뾶
    int get_r() const {
        return m_r;
    }
    //����Բ��
    void set_center(Point center) {
        m_center = center;
    }
    //��ȡԲ��
    Point get_center() const {
        return m_center;
    }
};

//�жϵ��Բ��λ�ù�ϵ
void judge(Point point, Circle circle) {
    if (exp2((double)(point.get_x()-circle.get_center().get_x())) + exp2((double)(point.get_y()-circle.get_center().get_y())) ==
            exp2((double)circle.get_r())) {
        cout<<"��Բ��"<<endl;
    }
    else if (exp2((double)(point.get_x()-circle.get_center().get_x())) + exp2((double)(point.get_y()-circle.get_center().get_y())) <
             exp2((double)circle.get_r())) {
        cout<<"��Բ��"<<endl;
    } else {
        cout<<"��Բ��"<<endl;
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