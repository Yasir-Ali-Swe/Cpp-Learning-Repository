#include <iostream>
using namespace std;
class Node
{
public:
    int Data;
    Node *Next;
    Node(int Data)
    {
        this->Data = Data;
        this->Next = NULL;
    }
};
class LinkedQueue
{
private:
    Node *front;
    Node *rear;

public:
    LinkedQueue()
    {
        front = NULL;
        rear = NULL;
    }
    void Enqueue(int Data)
    {
        Node *nodeToInsert = new Node(Data);
        if (rear == NULL)
        {
            front = nodeToInsert;
            rear = nodeToInsert;
            return;
        }
        rear->Next = nodeToInsert;
        rear = nodeToInsert;
        return;
    }
    void Dequeue()
    {
        if (front == NULL)
        {
            cout << "Queue is empty." << endl;
            return;
        }
        Node *temp = front;
        front = front->Next;
        if (front == NULL)
        {
            rear = NULL;
        }
        delete temp;
    }
    void PrintQueue()
    {
        if (front == NULL)
        {
            cout << "Queue is empty." << endl;
            return;
        }
        Node *temp = front;
        while (temp != NULL)
        {
            cout << temp->Data << " ";
            temp = temp->Next;
        }
        cout << endl;
    }
    void IsEmpty()
    {
        if (front == NULL)
        {
            cout << "Queue is empty." << endl;
        }
        else
        {
            cout << "Queue is not empty." << endl;
        }
    }
    void GetFront()
    {
        if (front == NULL)
        {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Front is " << front->Data << endl;
        return;
    }
};
int main()
{
    LinkedQueue lst;
    lst.PrintQueue();
    lst.Enqueue(100);
    lst.PrintQueue();
    lst.Enqueue(200);
    lst.PrintQueue();
    lst.Enqueue(300);
    lst.PrintQueue();
    lst.Enqueue(400);
    lst.PrintQueue();
    cout << "The Fornt element is ";
    lst.GetFront();
}