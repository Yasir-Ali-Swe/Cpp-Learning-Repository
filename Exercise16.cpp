#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number to find the sum from 1 to given number : ";
    cin >> num;
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    cout << "Sum upto 1 to given number is " << sum << endl;
    return 0;
}