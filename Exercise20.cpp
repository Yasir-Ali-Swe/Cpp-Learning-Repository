#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter the num1 : ";
    cin >> num1;
    cout << "Enter the num2 : ";
    cin >> num2;
    char op;
    cout << "Select operation (+,-,*,/) : ";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << "Sum is " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Subtraction is " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Multiplication is " << num1 * num2 << endl;
        break;
    case '/':
        cout << "Division is " << num1 / num2 << endl;
        break;
    default:
        cout << "Invalid operation select from given symbole." << endl;
        cout << "Select operation (+,-,*,/) : " << endl;
        break;
    }
    return 0;
}