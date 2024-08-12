#include <iostream>
#include <cstdlib>
using namespace std;
class LinkedQueue
{
private:
    int front;
    int rear;
    int *arrayQueue;
    int countItem;
    int maxSize;

public:
    LinkedQueue(int size)
    {
        maxSize = size;
        front = 0;
        rear = -1;
        arrayQueue = new int[maxSize];
        countItem = 0;
    }
    void Enqueue(int element)
    {
        if (countItem == maxSize)
        {
            cout << "Queue is full." << endl;
            return;
        }
        rear++;
        arrayQueue[rear] = element;
        countItem++;
    }
    void Dequeue()
    {
        if (countItem == 0)
        {
            cout << "Queue is empty." << endl;
            return;
        }
        for (int i = 0; i < rear; i++)
        {
            arrayQueue[i] = arrayQueue[i + 1];
        }
        rear--;
        countItem--;
    }
    void PrintQueue()
    {
        if (countItem == 0)
        {
            cout << "Queue is empty." << endl;
            return;
        }
        for (int i = 0; i <= rear; i++)
        {
            cout << arrayQueue[i] << " ";
        }
        cout << endl;
    }
    void GetFront()
    {
        if (countItem == 0)
        {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Front element is " << arrayQueue[front] << endl;
    }
    void isEmpty()
    {
        if (countItem == 0)
        {
            cout << "Queue is empty." << endl;
        }
        else
        {
            cout << "Queue is not empty." << endl;
        }
    }
};
int main()
{
    LinkedQueue Queue(5);
    bool gameOnHa = true;
    while (gameOnHa)
    {  
        cout<<endl;
        int op;
        cout << "Insert Element into Queue (Press 1)" << endl;
        cout << "Delete element from queue (Press 2)" << endl;
        cout << "Display the queue (Press 3)" << endl;
        cout << "Exit(Press 4)" << endl;
        cout << "Enter your choice : ";
        cin >> op;
        // system("clear");       
        switch (op)
        {
        case 1:
            int num;
            cout << "Enter the number to insert : ";
            cin >> num;
            Queue.Enqueue(num);
            cout << "Element inserted successfully." << endl;
            break;
        case 2:
            Queue.Dequeue();
            cout << "Front Element delete successfully from the Queue." << endl;
            break;
        case 3:
            cout<<"Printing all elements from the Queue."<<endl;
            Queue.PrintQueue();
            break;
        case 4:
            gameOnHa = false;
            cout << "Exiting the program." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
        }
    }
}