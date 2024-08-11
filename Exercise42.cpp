#include <iostream>
using namespace std;
class Person
{
public:
    string name, occupation;
    int age;

    Person()
    {
        cout << "Default constructor called." << endl;
    }

    Person(string name, string occupation, int age)
    {
        this->name = name;
        this->age = age;
        this->occupation = occupation;
    }

    void displayInfo()
    {
        cout << "Person details is...." << endl;
        cout << "Name       is " << this->name << endl;
        cout << "Age        is " << this->age << endl;
        cout << "Occupation is " << this->occupation << endl;
    }
};
int main()
{
    Person p1("Yasir Ali", "Software Engineer", 23);

    p1.displayInfo();

    return 0;
}