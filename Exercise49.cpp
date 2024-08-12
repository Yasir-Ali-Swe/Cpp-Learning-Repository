#include <iostream>
using namespace std;
int RaiseToPower(int base, int power)
{
    if (power == 0)
    {
        return 1;
    }
    int result = 1;
    for (int i = 1; i <= power; i++)
    {
        result = result * base;
    }
    return result;
}
int PowerUsingRecursion(int base, int power)
{
    if (power == 0)
    {
        return 1;
    }
    return base * PowerUsingRecursion(base, power - 1);
}
int main()
{
    int base, power;
    cout << "Enter the base number : ";
    cin >> base;
    cout << "Enter the power of base : ";
    cin >> power;
    cout << "The RaiseToPower of given base and number is using repetitation method " << RaiseToPower(base, power) << endl;
    cout << endl;
    cout << "The PowerUsingRecursion of given base and number is using recusion method " << PowerUsingRecursion(base, power) << endl;
    return 0;
}