#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter your mark to find your grade : ";
    cin >> marks;
    if (marks < 33)
    {
        cout << "Your grade is F." << endl;
    }
    else if (marks >= 33 && marks <= 55)
    {
        cout << "Your grade is D." << endl;
    }
    else if (marks >= 55 && marks <= 70)
    {
        cout << "Your grade is C." << endl;
    }
    else if (marks >= 70 && marks <= 80)
    {
        cout << "Your grade is B." << endl;
    }
    else if (marks >= 80 && marks <= 90)
    {
        cout << "Your grade is A." << endl;
    }
    else if (marks >= 90 && marks <= 100)
    {
        cout << "Your grade is A+." << endl;
    }
    return 0;
}