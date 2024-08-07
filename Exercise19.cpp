#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        if (i == 3)
        {
            continue;
        }
        cout << "continue." << endl;
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        if (i == 2)
        {
            break;
        }
        cout << "break." << endl;
    }

    return 0;
}