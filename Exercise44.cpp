#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    void setName(string personName)
    {
        name = personName;
    }

    void setAge(int personAge)
    {
        if (personAge >= 0)
        {
            age = personAge;
        }
        else
        {
            cout << "Invalid age!" << endl;
        }
    }

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }
};

int main()
{
    Person person;
    person.setName("Asad gujjar");
    person.setAge(25);
    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;
    return 0;
}
