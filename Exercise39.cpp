#include <iostream>
using namespace std;
void reverseString(string &str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
    {
        swap(str[i], str[n - i - 1]);
    }
}
int main()
{
    string str;
    cout << "Enter the string : ";
    getline(cin, str);
    cout << "Orignal string is => " << str << endl;
    reverseString(str);
    cout << "Reverse string is => " << str << endl;
    return 0;
}