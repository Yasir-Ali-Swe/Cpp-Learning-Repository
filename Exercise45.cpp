#include <iostream>
using namespace std;

class LinkedQueue
{
private:
    int front;
    int rear;
    int *arrayQueue;
    int queueSize;
    int itemCount;

public:
    LinkedQueue(int size)
    {
        queueSize = size;
        arrayQueue = new int[queueSize];
        front = 0;
        rear = -1;
        itemCount = 0;
    }
    void Enqueue(int element)
    {
        if (itemCount == queueSize)
        {
            cout << "Queue is full.";
            return;
        }
        rear++;
        arrayQueue[rear] = element;
        itemCount++;
    }
    void Dequeue()
    {
        if (itemCount == 0)
        {
            cout << "Queue is Empty." << endl;
            return;
        }
        else
        {
            for (int i = 0; i < rear; i++)
            {
                arrayQueue[i] = arrayQueue[i + 1];
            }
            rear--;
            itemCount--;
        }
    }
    void PrintQueue()
    {
        if (itemCount == 0)
        {
            cout << "Queue is Empty." << endl;
        }
        else
        {
            for (int i = 0; i <= rear; i++)
            {
                cout << arrayQueue[i] << " ";
            }
            cout << endl;
        }
    }
    void IsEmpty()
    {
        if (itemCount == 0)
        {
            cout << "Queue is Empty." << endl;
        }
        else
        {
            cout << "Queue is not  Empty." << endl;
        }
    }
    void GetFront()
    {
        if (itemCount == 0)
        {
            cout << "Queue is Empty." << endl;
        }
        else
        {
            cout << "Front element is " << arrayQueue[front] << endl;
        }
    }
    ~LinkedQueue()
    {
        delete[] arrayQueue;
    }
};
int main()
{
    cout << endl
         << endl;
    LinkedQueue Queue(5);
    cout << "inserting (1,2,3,4,5) in the Queue (Enqueue)..." << endl;
    Queue.Enqueue(1);
    Queue.Enqueue(2);
    Queue.Enqueue(3);
    Queue.Enqueue(4);
    Queue.Enqueue(5);
    cout << "Printing elements in the Queue After Enqueue." << endl;
    Queue.PrintQueue();
    cout << "Dequeue" << endl;
    Queue.Dequeue();
    Queue.Dequeue();
    cout << "Printing elements in the Queue after Dequeue." << endl;
    Queue.PrintQueue();
    cout << "Checking is the Queue is empty." << endl;
    Queue.IsEmpty();
    return 0;
}