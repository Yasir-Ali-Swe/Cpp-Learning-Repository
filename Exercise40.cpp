#include <iostream>
using namespace std;
class Person
{
public:
    string name, occupation;
    int age;
};
int main()
{
    Person p1;
    p1.name = "Yasir Ali";
    p1.occupation = "Software Engineer";
    p1.age = 23;

    cout << "Person details is...." << endl;
    cout << "Name       is " << p1.name << endl;
    cout << "Age        is " << p1.age << endl;
    cout << "Occupation is " << p1.occupation << endl;
    return 0;
}