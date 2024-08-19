#include <iostream>
#include <stack>

using namespace std;

bool isBalancedSymbols(const string &input)
{
    stack<char> symbolStack;

    for (char symbol : input)
    {
        if (symbol == '(' || symbol == '[' || symbol == '{')
        {
            symbolStack.push(symbol);
        }
        else if (symbol == ')' || symbol == ']' || symbol == '}')
        {
            if (symbolStack.empty())
            {
                return false; 
            }

            char topSymbol = symbolStack.top();
            symbolStack.pop();

            if ((symbol == ')' && topSymbol != '(') ||
                (symbol == ']' && topSymbol != '[') ||
                (symbol == '}' && topSymbol != '{'))
            {
                return false;
            }
        }
    }

    return symbolStack.empty();
}

int main()
{
    string input;

    cout << "Enter a string with parentheses, brackets, and braces: ";
    getline(cin, input);

    if (isBalancedSymbols(input))
    {
        cout << "Symbols are balanced.\n";
    }
    else
    {
        cout << "Symbols are not balanced.\n";
    }

    return 0;
}
