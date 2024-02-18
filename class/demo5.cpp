#include <iostream>

using namespace std;

class Cube {
private:
    double Side;
public:
    void set_cube(double side) {
        Side = side;
    }

    double calculate_volume() const {             //const表示该函数不会修改成员数值
        double  volume = Side * Side * Side;
        cout<<volume<<endl;
        return volume;
    }

    double calculate_area() const {
        double  area = 6 * Side * Side;
        cout<<area<<endl;
        return area;
    }
};

void Compare(double area1, double volume1, double area2, double volume2) {
    if (area1 == area2 && volume1 == volume2) {
        cout << "相同" << endl;
        return;
    }
    cout << "不同" << endl;
}

int main() {
    Cube cube1{};
    cube1.set_cube(20);
    cube1.calculate_volume();
    cube1.calculate_area();

    Cube cube2{};
    cube2.set_cube(20);
    cube2.calculate_volume();
    cube2.calculate_area();

    Compare(cube1.calculate_area(), cube2.calculate_area(), cube1.calculate_volume(), cube2.calculate_volume());
    return 0;
}