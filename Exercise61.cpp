#include <iostream>
using namespace std;
void findSum(int a, int b, int &sum)
{
    sum = a + b;
}
int main()
{
    int a, b;
    cout << "Enter Num1 : ";
    cin >> a;
    cout << "Enter Num2 : ";
    cin >> b;
    int sum;
    findSum(a, b, sum);
    cout << "Sum of Num1 and Num2 is " << sum << endl;
    return 0;
}