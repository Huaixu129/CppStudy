#include <iostream>
#include <string>
#include <utility>

using namespace std;

class Person {
private:
    string m_name = "sophomore" ;
    int age = 18;
    string university = "CCNU";
public:
    void get_name() {
        cout<<m_name<<endl;
    }
    void get_univercity() {
        cout<<university<<endl;
    }
    void get_age() const {
        cout<<age<<endl;
    }
    void set_name(string name) {
        m_name = name;
    }
};

int main() {
    Person person;
    person.get_age();
    person.get_name();
    person.get_univercity();
    person.set_name("fan");
    person.get_name();
    return 0;
}