#include <iostream>
using namespace std;
int main()
{
    string str1, str2;
    cout << "Enter the string1..." << endl;
    getline(cin, str1);
    cout << "Enter the string2..." << endl;
    getline(cin, str2);
    cout << "The concate strings are => " << str1 << " " << str2 << endl;
    return 0;
}