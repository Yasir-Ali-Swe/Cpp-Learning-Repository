#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;
    cout << "Value store in A variable is                        " << a << endl;
    cout << "Address of A variable is                            " << &a << endl;
    cout << "Address of pointr ptr pointing to A variable is     " << ptr << endl;
    cout << "Valur of pointr ptr                                 " << *ptr << endl;
    return 0;
}