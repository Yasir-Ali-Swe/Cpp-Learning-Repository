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
void insertNode(Node *&head, int Data)
{
    Node *nodeToInsert = new Node(Data);
    if (head == NULL)
    {
        head = nodeToInsert;
        nodeToInsert->Next = head;
        return;
    }
    else
    {
        Node *temp = head;
        while (temp->Next != head)
        {
            temp = temp->Next;
        }
        temp->Next = nodeToInsert;
        nodeToInsert->Next = head;
        return;
    }
}
void josephus(Node *&head, int k)
{
    if (head == NULL)
    {
        cout << "Empty List." << endl;
        return;
    }
    else
    {
        Node *curr = head;
        Node *pre = NULL;
        while (curr->Next != curr)
        {
            for (int i = 0; i < k - 1; i++)
            {
                pre = curr;
                curr = curr->Next;
            }
            pre->Next = curr->Next;
            Node *temp = curr;
            curr = curr->Next;
            delete temp;
        }
        cout << "Survivor " << curr->Data << " ";
        cout << endl;
    }
}
void print(Node *head)
{
    if (head == NULL)
    {
        cout << "Empty List." << endl;
        return;
    }
    else
    {
        Node *temp = head;
        do
        {
            cout << temp->Data << " ";
            temp = temp->Next;
        } while (temp != head);
        cout << endl;
        return;
    }
}
int main()
{
    cout << "Josoupho,s problems..." << endl;
    Node *head = NULL;
    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 3);
    insertNode(head, 4);
    insertNode(head, 5);
    // insertNode(head, 6);
    // insertNode(head, 7);
    cout << "Before calling josophos,s method linklist is ..." << endl;
    print(head);
    cout << "After calling Josoupho methods and the value of k is 3..." << endl;
    josephus(head, 3);
    return 0;
}
