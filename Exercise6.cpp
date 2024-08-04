#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    cout << "Before converting the type of a is : " << typeid(a).name() << ".i mean integer." << endl;
    double b = static_cast<double>(a);
    cout << "After converting the type of a the new datatype of a is : " << typeid(b).name() << ".d mean double." << endl;
    return 0;
}