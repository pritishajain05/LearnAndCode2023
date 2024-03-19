// Method-3: using appropriate functions instead of getters and setters
#include <iostream>
#include <string>
using namespace std;

class Person {
    private:
        string name;
        int age;

    public:
        Person(string name, int age) : name(name), age(age) {}
        void displayPersonInfo() {
            cout << "Name = " << name << endl;
            cout << "Age = " << age << endl;
        }
        void updatePersonInfo(string name, int age) {
            this->name = name;
            this->age = age;
        }
};

int main() {
   
    Person person("Pritisha", 22);
    person.displayPersonInfo();
    
    person.updatePersonInfo("PJ", 23);
    person.displayPersonInfo();

    return 0;
}
