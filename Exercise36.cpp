#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter the string....." << endl;
    getline(cin, str);
    cout << "Original string is => " << str << endl;
    cout << "Reverse string is => " << endl;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        cout << str[i];
    }
    cout << endl;
}