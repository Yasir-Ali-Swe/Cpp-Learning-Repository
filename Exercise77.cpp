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
    cout << "Pusing elements in stack..." << endl;
    stk.push(100);
    stk.push(200);
    stk.push(300);
    stk.push(400);
    stk.push(500);
    cout << "Displaying elements from stack...." << endl;
    stk.display();
    cout << "\nPoping..\n";
    stk.pop();
    cout << "After poping top element from stack remaning elements in stack..." << endl;
    stk.display();
    system("pause");
}