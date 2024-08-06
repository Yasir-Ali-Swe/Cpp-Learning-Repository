#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "ENter the number to print even number upto that number  : ";
    cin >> num;
    int i = 1;
    while (i <= num)
    {
        if (i % 2 == 0)
        {
            cout << "Even no is " << i << endl;
        }
        i++;
    }
    return 0;
}