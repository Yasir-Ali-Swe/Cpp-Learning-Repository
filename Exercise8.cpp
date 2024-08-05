#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number to check is it even or odd : ";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "Given no is " << num << " Even." << endl;
    }
    else
    {
        cout << "Given no is " << num << " odd." << endl;
    }
    return 0;
}
