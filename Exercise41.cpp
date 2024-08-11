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
};
int main()
{
    Person p1("Yasir Ali", "Software Engineer", 23);

    cout << "Person details is...." << endl;
    cout << "Name       is " << p1.name << endl;
    cout << "Age        is " << p1.age << endl;
    cout << "Occupation is " << p1.occupation << endl;

    return 0;
}