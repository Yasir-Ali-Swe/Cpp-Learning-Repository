#include <iostream>
#include <string>
using namespace std;
void revString(string *str, int len)
{
    int start = 0;
    int end = len - 1;
    while (start < end)
    {
        char temp = (*str)[start];
        (*str)[start] = (*str)[end];
        (*str)[end] = temp;
        start++;
        end--;
    }
    return;
}
int main()
{
    string str;
    cout << "Enter the string you want to input..." << endl;
    getline(cin, str);
    int len = str.size();
    revString(&str, len);
    cout << "String after reverse is..." << endl;
    cout << str << endl;
    delete str;
    return 0;
}