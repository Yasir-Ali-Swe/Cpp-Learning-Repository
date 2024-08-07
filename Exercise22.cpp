#include <iostream>
using namespace std;
void displayGreetings(string name)
{
    cout << "Good morning " << name << endl;
}
int main()
{
    string name;
    cout << "Enter your name : ";
    getline(cin, name);
    displayGreetings(name);
}