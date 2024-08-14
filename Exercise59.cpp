#include <iostream>
using namespace std;
class Person
{
public:
    string name;
    int age;
    string cnic;

    Person(string name, int age, string cnic)
    {
        this->age = age;
        this->cnic = cnic;
        this->name = name;
    }

    void print()
    {
        cout << "Name of Person is " << name << endl;
        cout << "Age of Person is " << age << endl;
        cout << "Cnic of Person is " << cnic << endl;
    }
};
int main()
{
    Person P1("Yasir Ali", 20, "xxxxx-xxxxxxx-x");
    P1.print();
}