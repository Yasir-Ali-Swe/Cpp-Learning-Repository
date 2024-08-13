#include <iostream>
using namespace std;
int SumofDigits(int num)
{
    if (num == 0)
    {
        return 0;
    }
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }
    return sum;
}
int SumUsingRecursion(int num)
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
        return num + SumUsingRecursion(num - 1);
    }
}
int main()
{
    int num;
    cout << "Enter the number to find the sum upto given number : ";
    cin >> num;
    cout << "SumofDigits using repitation method is " << SumofDigits(num) << endl;
    cout << endl;
    cout << "SumUsingRecursion using recusion method is " << SumUsingRecursion(num) << endl;
    return 0;
}