// Method-2: using constructor initialization 
#include <iostream>
#include <string>

using namespace std;

class Person
{
    private:
        string name;
        int age;
    
    public:
        Person(string name, int age) : name(name), age(age){}
        void displayPersonInfo(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

int main()
{
    string name = "Pritisha";
    int age = 22;

    Person person(name, age);
    person.displayPersonInfo();

    return 0;
}

