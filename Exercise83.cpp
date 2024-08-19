#include <iostream>
#include <stack>

using namespace std;

void decimalToBinary(int decimalNumber)
{
    stack<int> binaryStack;

    while (decimalNumber > 0)
    {
        binaryStack.push(decimalNumber % 2);
        decimalNumber /= 2;
    }

    cout << "Binary equivalent: ";
    while (!binaryStack.empty())
    {
        cout << binaryStack.top();
        binaryStack.pop();
    }
    cout << endl;
}

int main()
{
    int decimalNumber;

    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    decimalToBinary(decimalNumber);

    return 0;
}
