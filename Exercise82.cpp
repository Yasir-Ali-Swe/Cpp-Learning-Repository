#include <iostream>
#include <string>
#include <stack>
using namespace std;
int postFixEvaluation(string s)
{
    stack<int> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int oP2 = st.top();
            st.pop();
            int oP1 = st.top();
            st.pop();
            switch (s[i])
            {
            case '+':
                st.push(oP1 + oP2);
                break;
            case '-':
                st.push(oP1 - oP2);
                break;
            case '*':
                st.push(oP1 * oP2);
                break;
            case '/':
                st.push(oP1 / oP2);
                break;
            default:
                break;
            }
        }
    }
    return st.top();
}
int main()
{

    cout << "Evaluating posit fix expression 46+2/5*7+ ..." << endl;
    cout << "Final output is -> ";
    cout << postFixEvaluation("46+2/5*7+") << endl;
    return 0;
}