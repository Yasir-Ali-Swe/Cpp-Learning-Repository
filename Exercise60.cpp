#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    int age;
    string cnic;

    // Person(int age, string cnic)
    // {
    //     this->age = age;
    //     this->cnic = cnic;
    // }

    void setage(int age)
    {
        if (age < 0 || age > 130)
        {
            cout << "Invalid age,age must be in between 0 to 130." << endl;
            exit;
            return;
        }
        else
        {
            this->age = age;
        }
    }

    int getage()
    {
        return age;
    }

    void setcnic(string cnic)
    {
        if (cnic.length() != 13)
        {
            cout << "Cnic must have 13 characters." << endl;
            return;
        }
        else
        {
            this->cnic = cnic;
        }
    }
    string getcnic()
    {
        return cnic;
    }
};
int main()
{
    Person p1;
    p1.setage(133);
    p1.setcnic("3310042021679");
    cout << "Person age is " << p1.getage() << " "
         << " and person cnic is " << p1.getcnic() << endl;
    return 0;
}