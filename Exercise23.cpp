#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b;
    cout << "Enter number1 : ";
    cin >> a;
    cout << "Enter number2 : ";
    cin >> b;
    cout << "Sum is " << sum(a, b) << endl;
}