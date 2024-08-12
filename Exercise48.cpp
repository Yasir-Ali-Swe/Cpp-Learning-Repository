#include <iostream>
using namespace std;
int CalculateFactorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int FactorialRecursion(int num)
{
    if (num == 0 || num == 1)
    {
        return num;
    }
    return num * FactorialRecursion(num - 1);
}
int main()
{
    int num;
    cout << "Enter the no to calculate the Fictorial : ";
    cin >> num;
    cout << "Factorial of the given number using repetation method is " << CalculateFactorial(num) << endl;
    cout << endl;
    cout << "Factorial of the given number using recursion method is " << FactorialRecursion(num) << endl;
    return 0;
}