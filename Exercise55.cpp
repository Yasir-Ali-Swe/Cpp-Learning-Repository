#include <iostream>
using namespace std;
class Person
{
public:
    int age;
    string name;
    string gender;

    void displayInfo()
    {
        cout << "Name   is " << name << endl;
        cout << "Age    is " << age << endl;
        cout << "Gender is " << gender << endl;
    }
};
int main()
{

    // object creation
    Person p1;
    // assining attributes
    p1.name = "Yasir";
    p1.age = 21;
    p1.gender = "Male";
    // printing values of attributes
    cout << endl
         << endl;
    cout << "Name of person1 is  " << p1.name << endl;
    cout << "Age of person1 is " << p1.age << endl;
    cout << "Gender of person1 is " << p1.gender << endl;
    // calling function
    cout << endl
         << endl;
    p1.displayInfo();

    // object 2 creation
    Person p2;
    // assining attributes
    p2.name = "Ali";
    p2.age = 22;
    p2.gender = "Male";
    cout << endl
         << endl;
    p2.displayInfo();
    return 0;
}