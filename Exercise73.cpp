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
class DoublyList
{
private:
    Node *head;
    Node *tail;
    Node *currenetLocation;

public:
    DoublyList()
    {
        head = NULL;
        tail = NULL;
        currenetLocation = NULL;
    }
    void insertNode(Node *&head, Node *&tail, int Data)
    {
        if (tail == NULL)
        {
            Node *nodeToInsert = new Node(Data);
            head = nodeToInsert;
            tail = nodeToInsert;
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
    void deleteNode(Node *&head, Node *&tail, int position)
    {
        if (head == NULL || position <= 0)
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
            temp->Next = NULL;
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
                cout << "Position is out of range." << endl;
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
            curr->Next = NULL;
            curr->Pre = NULL;
            delete curr;
            return;
        }
    }

    void printList(Node *head)
    {
        while (head != NULL)
        {
            cout << head->Data << " ";
            head = head->Next;
        }
        cout << endl;
    }
};
int main()
{
    Node *node1 = new Node(1);
    Node *head = node1;
    Node *tail = node1;
    DoublyList *list1 = new DoublyList();
    cout << endl;
    cout << "insertion in Doubly linklist." << endl;
    list1->printList(node1);
    list1->insertNode(head, tail, 2);
    list1->printList(head);
    list1->insertNode(head, tail, 3);
    list1->printList(head);
    list1->insertNode(head, tail, 4);
    list1->printList(head);
    cout << endl;

    cout << "Deleting node from linklist." << endl;
    list1->deleteNode(head, tail, 2);
    list1->printList(head);
    delete node1;
    delete list1;
    return 0;
}