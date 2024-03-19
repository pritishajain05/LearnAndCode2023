// Method-1: using public data members instead of private
#include <iostream>
#include <string>

using namespace std;

class Person {
    public:
        string name;
        int age;
};

int main() {
    Person person;

    person.name = "Pritisha";
    person.age = 22;

    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;

    return 0;
}
