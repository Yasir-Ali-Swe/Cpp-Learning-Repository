#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter the value of num1 : ";
    cin >> num1;
    cout << "Enter the value of num2 : ";
    cin >> num2;
    cout << "Before swaping the value of num1 is " << num1 << " and num2 is " << num2 << endl;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout << "After swaping the value of num1 is " << num1 << " and num2 is " << num2 << endl;
    return 0;
}