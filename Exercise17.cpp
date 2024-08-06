#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number to find Fictorial : ";
    cin >> num;
    int factorial = 1;
    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }
    cout << "Factorial is " << factorial << endl;
    return 0;
}