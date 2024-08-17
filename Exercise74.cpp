#include <iostream>
using namespace std;
class Node
{
public:
    int Data;
    Node *Next;
    Node *Pre;
    Node(int Data)
    {
        this->Data = Data;
        this->Next = NULL;
        this->Pre = NULL;
    }
};
void insertAtTail(Node *head, Node *&tail, int Data)
{
    if (tail == NULL || head == NULL)
    {
        Node *nodeToInsert = new Node(Data);
        head = nodeToInsert;
        tail = nodeToInsert;
        return;
    }
    else
    {
        Node *nodeToInsert = new Node(Data);
        tail->Next = nodeToInsert;
        nodeToInsert->Pre = tail;
        tail = nodeToInsert;
        return;
    }
}
void insertAtHead(Node *&head, Node *&tail, int Data)
{
    if (head == NULL)
    {
        Node *nodeToInsert = new Node(Data);
        head = nodeToInsert;
        tail = nodeToInsert;
        return;
    }
    else
    {
        Node *nodeToInsert = new Node(Data);
        nodeToInsert->Next = head;
        head->Pre = nodeToInsert;
        head = nodeToInsert;
        return;
    }
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

void deleteNode(Node *&head, Node *&tail, int position)
{
    if (head == NULL)
    {
        cout << "List is Empty." << endl;
        return;
    }
    if (position == 1)
    {
        Node *temp = head;
        head = temp->Next;
        if (head != NULL)
        {
            head->Pre = NULL;
        }
        else
        {
            tail = NULL;
        }
        delete temp;
        return;
    }
    else
    {
        Node *pre = NULL;
        Node *curr = head;
        int ctn = 1;
        while (ctn < position && curr != NULL)
        {
            pre = curr;
            curr = curr->Next;
            ctn++;
        }
        if (curr == NULL)
        {
            cout << "Position out of range." << endl;
            return;
        }
        pre->Next = curr->Next;
        if (curr->Next != NULL)
        {
            curr->Next->Pre = NULL;
        }
        else
        {
            tail = pre;
        }
        delete curr;
        return;
    }
}
int main()
{
    cout << "Appropriate methods for insertion and deletion of nodes..." << endl;
    Node *node1 = new Node(1);
    Node *head = node1;
    Node *tail = node1;
    print(head);
    cout << "Insertion at tail or end." << endl;
    insertAtTail(head, tail, 2);
    insertAtTail(head, tail, 3);
    insertAtTail(head, tail, 4);
    insertAtTail(head, tail, 5);
    insertAtTail(head, tail, 6);
    print(head);
    cout << "Deletion of nodes...." << endl;
    cout << "Before deltion linklist is...." << endl;
    print(head);
    cout << endl;
    cout << "After deltion linklist is...." << endl;
    deleteNode(head, tail, 6);
    print(head);
    delete node1;
    return 0;
}