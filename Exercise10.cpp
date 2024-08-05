#include <iostream>
using namespace std;
int main()
{
    int correctPassword = 112233;
    int givenPassword;
    cout << "Enter the password to unlock the phone : ";
    cin >> givenPassword;
    if (correctPassword == givenPassword)
    {
        cout << "Your are login." << endl;
    }
    else
    {
        cout << "Wrong Password.Try again." << endl;
    }
    cout << "Programe ended." << endl;
    return 0;
}