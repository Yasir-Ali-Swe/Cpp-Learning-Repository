#include <iostream>
using namespace std;
void print(const int *ptr)
{
    if (ptr)
    {
        cout << "Value in pointer is " << *ptr << endl;
    }
    else
    {
        cout << "Pointr is NULL." << endl;
    }
}
int main()
{
    int x = 10;
    const int *ptr = &x;
    print(ptr);
}