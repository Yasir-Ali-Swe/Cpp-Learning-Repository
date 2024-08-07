#include <iostream>
using namespace std;
void sum(int a, int b)
{
    cout << "Function with two parameters : " << a + b << endl;
}
void sum(int a, int b, int c)
{
    cout << "Function with three parameters : " << a + b + c << endl;
}
void sum(int a, int b, int c, int d)
{
    cout << "Function with four parameters : " << a + b + c + d << endl;
}
int main()
{
    sum(1, 2);
    sum(1, 2, 3);
    sum(1, 2, 3, 4);
    return 0;
}