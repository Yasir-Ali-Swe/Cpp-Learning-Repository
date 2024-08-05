#include <iostream>
using namespace std;
int main()
{
    int num1, num2, result;
    cout << "Enter the num1 : ";
    cin >> num1;
    cout << "Enter the num2 : ";
    cin >> num2;
    int option;
    cout << "Press 1 for       Addition." << endl;
    cout << "Press 2 for    Subtraction." << endl;
    cout << "Press 3 for Multiplication." << endl;
    cout << "Press 4 for       Division." << endl;
    if (option == 1)
    {
        cout << "Addition is " << num1 + num2 << endl;
    }
    else if (option == 2)
    {
        cout << "Subtraction is " << num1 - num2 << endl;
    }
    else if (option == 3)
    {
        cout << "Multiplication is " << num1 * num2 << endl;
    }
    else if (option == 4)
    {
        cout << "Division is " << (num1 / num2) << endl;
    }
    else
    {
        cout << "Invalid choice." << endl;
    }
    return 0;
}