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
class List
{
private:
    Node *currentLocation;

public:
    void setcurrentLocation(Node *node)
    {
        currentLocation = node;
    }
    List()
    {
        currentLocation = NULL;
    }
    void print(Node *head)
    {
        while (head != NULL)
        {
            cout << head->Data << " ";
            head = head->Next;
        }
        cout << endl;
    }
    void insert(Node *&head, Node *&tail, int data)
    {
        Node *node = new Node(data);
        if (head == NULL)
        {
            head = node;
        }
        else
        {
            tail->Next = node;
            tail = node;
        }
    }
    void deleteNode(Node *&head, Node *&tail, int data)
    {
        if (head == NULL)
        {
            cout << "Linkedlist is empyt,unable to perform deletion." << endl;
            return;
        }
        Node *temp = head;
        Node *prev = NULL;
        if (temp != NULL && temp->Data == data)
        {
            head = temp->Next;
            delete temp;
            if (head == NULL)
            {
                tail = NULL;
            }
            return;
        }
        while (temp != NULL && temp->Data != data)
        {
            prev = temp;
            temp = temp->Next;
        }
        if (temp == NULL)
        {
            cout << "Node not present in the list." << endl;
            return;
        }
        prev->Next = temp->Next;
        if (temp == tail)
        {
            tail = prev;
        }
        delete temp;
    }
    void adBetween(int value)
    {
        if (currentLocation == NULL)
        {
            cout << "Current location is not set." << endl;
            return;
        }
        Node *newnode = new Node(value);
        newnode->Next = currentLocation->Next;
        currentLocation->Next = newnode;
    }
};
int main()
{
    Node *node = new Node(12);
    Node *head = node;
    Node *tail = node;
    List myList;
    cout<<"After inserting nodes of data 14,15,16 the linked list form."<<endl;
    myList.insert(head, tail, 14);
    myList.insert(head, tail, 15);
    myList.insert(head, tail, 16);

    cout << "The current linkedlist is...." << endl;
    myList.print(head);

    cout << "Liked list after node 15 deleteltion is....." << endl;
    myList.deleteNode(head, tail, 15);
    myList.print(head);
    myList.setcurrentLocation(head->Next);

    cout<<"After insertion 13 in between nodes 14 and 16 is."<<endl;
    myList.adBetween(13);
    myList.print(head);

    return 0;
}