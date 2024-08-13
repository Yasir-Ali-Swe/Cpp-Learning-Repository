#include <iostream>
using namespace std;
void FibonacciSequence(int num)
{
    int a = 0;
    int b = 1;
    int c;
    cout << a << " ";
    cout << b << " ";
    for (int i = 2; i < num; i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;
}

int FibonacciUsingRecursion(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return FibonacciUsingRecursion(num - 1) + FibonacciUsingRecursion(num - 2);
    }
}

int main()
{
    int num;
    cout << "Enter the number to generate the fibonacci series : ";
    cin >> num;
    cout << "Fibonacci sequence using repitation method is...." << endl;
    FibonacciSequence(num);
    cout << endl;
    cout << "Fibonacci sequence using recursion method is...." << endl;
    for (int i = 0; i < num; i++)
    {
        cout << FibonacciUsingRecursion(i) << " ";
    }
    cout << endl;
    return 0;
}