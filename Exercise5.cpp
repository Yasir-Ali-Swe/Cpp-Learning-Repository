#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter the value of first  digit : ";
    cin >> num1;
    cout << "Enter the value of second digit : ";
    cin >> num2;
    cout << "Sum            of " << num1 << " and " << "num2 " << " is " << num1 + num2 << endl;
    cout << "Subtraction    of " << num1 << " and " << "num2 " << " is " << num1 - num2 << endl;
    cout << "Multiplication of " << num1 << " and " << "num2 " << " is " << num1 * num2 << endl;
    cout << "Divison        of " << num1 << " and " << "num2 " << " is " << float(num1 / num2) << endl;
    return 0;
}