#include <iostream>
using namespace std;
int findLength(char *str)
{
    int len = 0;
    while (*str != '\0')
    {
        len++;
        str++;
    }
    return len;
}
int main()
{
    char ch[100];
    cout << "Enter the character array to find the length of array..." << endl;
    cin.getline(ch, 100);

    int len = findLength(ch);
    cout << "Length of chara array is " << len << endl;
    return 0;
}