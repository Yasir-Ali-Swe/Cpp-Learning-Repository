#include <iostream>
using namespace std;
void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a, b;
    cout << "Enter the value of A : ";
    cin >> a;
    cout << "Enter the value of B : ";
    cin >> b;
    cout << "Before function call value of A is " << a << " and B is " << b << endl;
    Swap(a, b);
    cout << "After  function call value of A is " << a << " and B is " << b << endl;
    return 0;
}