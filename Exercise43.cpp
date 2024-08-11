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

    // Person(string name, string occupation, int age)
    // {
    //     this->name = name;
    //     this->age = age;
    //     this->occupation = occupation;
    // }

    void setName(string name)
    {
        this->name = name;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    void setOccupation(string occupation)
    {
        this->occupation = occupation;
    }

    string getName()
    {
        return this->name;
    }

    string getOccupation()
    {
        return this->occupation;
    }

    int getAge()
    {
        return this->age;
    }

    // void displayInfo()
    // {
    //     cout << "Person details is...." << endl;
    //     cout << "Name       is " << this->name << endl;
    //     cout << "Age        is " << this->age << endl;
    //     cout << "Occupation is " << this->occupation << endl;
    // }
};
int main()
{
    // Person p1("Yasir Ali", "Software Engineer", 23);

    // p1.displayInfo();
    Person p1;
    p1.setAge(23);
    p1.setName("Yasir Ali");
    p1.setOccupation("Software Engineer");

    cout << "Person Details." << endl;
    cout << "Name       is " << p1.getName() << endl;
    cout << "Age        is " << p1.getAge() << endl;
    cout << "Occupation is " << p1.getOccupation() << endl;

    return 0;
}