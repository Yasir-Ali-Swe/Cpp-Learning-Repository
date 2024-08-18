#include <iostream>
using namespace std;
int const STACKSIZE = 5;
class Stack
{
private:
    int arryStack[STACKSIZE];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isFull()
    {
        if (top == STACKSIZE - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int size()
    {
        return top + 1;
    }
    void push(int element)
    {
        if (isFull() == true)
        {
            cout << "Stack is full." << endl;
            return;
        }
        top++;
        arryStack[top] = element;
    }
    void pop()
    {
        if (isEmpty() == true)
        {
            cout << "Stack is Empty." << endl;
            return;
        }
        else
        {
            top--;
        }
    }
    void display()
    {

        if (isEmpty() == true)
        {
            cout << "Stack is Empty." << endl;
            return;
        }
        else
        {
            for (int i = top; i >= 0; i--)
            {
                cout << arryStack[i] << endl;
            }
        }
    }
};

int main()
{
    Stack stk;
    cout << "Pushing 1,2 ,3 in stack..." << endl;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    cout << "displaying Elements in the stack..." << endl;
    stk.display();
    cout << "Poping Elements in stack...." << endl;
    stk.pop();
    cout << "After pop of 3 remaning elements in stack...." << endl;
    stk.display();

    return 0;
}