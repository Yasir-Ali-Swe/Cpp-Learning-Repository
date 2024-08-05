#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number to check is it positive negative or zero : ";
    cin >> num;
    if (num < 0)
    {
        cout << "Number is negative." << endl;
    }
    else if (num == 0)
    {
        cout << "Number is Zero." << endl;
    }
    else if (num > 0)
    {
        cout << "Number is psoitive." << endl;
    }
    else
    {
        cout << "Enter a valid number." << endl;
    }
    return 0;
}
