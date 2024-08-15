#include <iostream>
using namespace std;
void Swape(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a, b;
    cout << "Enter the Num1 : ";
    cin >> a;
    cout << "Enter the Num2 : ";
    cin >> b;
    cout << "Before swaping...." << endl;
    cout << "Num1 is " << a << " Num2 is " << b << endl;
    Swape(a, b);
    cout << "Before swaping...." << endl;
    cout << "Num1 is " << a << " Num2 is " << b << endl;
}