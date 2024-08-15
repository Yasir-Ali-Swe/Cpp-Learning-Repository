#include <iostream>
#include <cstring>
using namespace std;
void print(string *str[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Name of student no " << (i + 1) << " is " << *(str[i]) << endl;
    }
    return;
}
int main()
{
    string *str[3];
    for (int i = 0; i < 3; i++)
    {
        string name;
        cout << "Enter the name of student no " << (i + 1) << " : ";
        cin >> name;
        str[i] = new string(name);
    }
    print(str, 3);
    // delete[] str;
    return 0;
}