#include <iostream>
#include <string>
#include <utility>
using namespace std;

class Student {
public:
    string name;
    string stuID;
    int    sex;

    void id_set_name_and(string Name, string Id) {
        name = Name;
        stuID = Id;
    }
    void showNameAndId() {
        cout<<name<<endl<<stuID<<endl;
    }
};

int main() {
    Student student;
    student.id_set_name_and("»±Ðò", "2023214931");
    student.showNameAndId();
    return 0;
}