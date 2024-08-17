#include <iostream>
using namespace std;
class Node
{
public:
    int Data;
    Node *Next;
    Node(int data)
    {
        this->Data = data;
        this->Next = NULL;
    }
};

// insert at tail or end.

void insertAtTail(int data, Node *&tail)
{
    Node *newNode = new Node(data);
    tail->Next = newNode;
    tail = newNode;
}

// insert at head or start.

void insertAtStart(int data, Node *&head)
{
    Node *newNode = new Node(data);
    newNode->Next = head;
    head = newNode;
}

// print method to print linkedlist

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->Data << " ";
        head = head->Next;
    }
    cout << endl;
}

// finding min max

void findMinMax(Node *head, int &min, int &max)
{
    min = head->Data;
    max = 0;
    while (head != NULL)
    {
        if (head->Data > max)
        {
            max = head->Data;
        }
        if (head->Data < min)
        {
            min = head->Data;
        }
        head = head->Next;
    }
}

// searching in linkedlist.

bool searching(Node *head, int key)
{
    if (head == NULL)
    {
        cout << "Linkedlist is empty,so no key exist.";
        return false;
    }
    while (head != NULL)
    {
        if (head->Data == key)
        {
            return true;
        }
        head = head->Next;
    }
    return false;
}

// insertion at any position.

void insertAtAnyPosition(Node *&head, Node *&tail, int position, int value)
{
    int ctn = 1;
    Node *temp = head;
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    if (position == 1)
    {
        insertAtStart(value, head);
        return;
    }

    while (ctn < position - 1 && temp != NULL)
    {
        temp = temp->Next;
        ctn++;
    }

    if (temp == NULL)
    {
        insertAtTail(value, tail);
        return;
    }

    newNode->Next = temp->Next;
    temp->Next = newNode;
    if (newNode->Next == NULL)
    {
        tail = newNode;
    }
}

// Bubble sort in linkedlist.

void bubbleSort(Node *&head)
{
    if (head == nullptr || head->Next == nullptr)
    {
        return;
    }

    Node *i, *j;
    int data;
    for (i = head; i->Next != nullptr; i = i->Next)
    {
        for (j = head; j->Next != nullptr; j = j->Next)
        {
            if (j->Data > j->Next->Data)
            {
                data = j->Data;
                j->Data = j->Next->Data;
                j->Next->Data = data;
            }
        }
    }
}

// insertatsorted

void insertInSorted(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL || head->Data >= value)
    {
        newNode->Next = head;
        head = newNode;
    }
    else
    {
        Node *current = head;
        while (current->Next != NULL && current->Next->Data < value)
        {
            current = current->Next;
        }
        newNode->Next = current->Next;
        current->Next = newNode;
    }
}
// swap two elements in linkedlist
void swapElementsInLinkedlist(int x, int y, Node *head)
{
    if (x == y)
    {
        return;
    }
    Node *preX = NULL;
    Node *currX = head;
    while (currX && currX->Data != x)
    {
        preX = currX;
        currX = currX->Next;
    }

    Node *preY = NULL;
    Node *currY = head;
    while (currY && currY->Data != y)
    {
        preY = currY;
        currY = currY->Next;
    }

    if (!currX || !currY)
    {
        return;
    }

    if (preX)
    {
        preX->Next = currY;
    }
    else
    {
        head = currY;
    }

    if (preY)
    {
        preY->Next = currX;
    }
    else
    {
        head = currX;
    }

    Node *temp = currX->Next;
    currX->Next = currY->Next;
    currY->Next = temp;
    cout << "After swaping elements in linkedlist...." << endl;
    print(head);
}

int main()
{
    int min, max;
    Node *node1 = new Node(1);
    Node *head = node1;
    Node *tail = node1;

    insertAtTail(2, tail);
    insertAtTail(3, tail);
    insertAtTail(4, tail);
    insertAtTail(11, tail);
    insertAtTail(8, tail);
    insertAtTail(15, tail);
    // linkedlsit creation.
    cout << "Current LinkeList is.... " << endl;
    print(head);
    cout << endl;
    // findind min max.
    findMinMax(head, min, max);
    cout << "Min in the linkedlist is " << min << " Max is " << max << endl;
    cout << endl;
    // searching in linked list.
    cout << "Seaching 4 in linkedlist." << endl;
    if (searching(head, 4))
    {
        cout << "Key is present in the linkedlist " << endl;
    }
    else
    {
        cout << "Key is not present in the linkedlist." << endl;
    }
    cout << endl;

    cout << "inserting at any position." << endl;
    cout << "Inserting element at first Node..." << endl;
    // inserting at any position.
    insertAtAnyPosition(head, tail, 1, 0);
    print(head);
    cout << "Inserting 0 at 6 position." << endl;
    insertAtAnyPosition(head, tail, 6, 0);
    print(head);
    cout << endl;

    cout << "insertion in sorted order." << endl;
    // insert in sorted
    cout << "After inserting 12 in linkedlist." << endl;
    insertInSorted(head, 12);
    print(head);

    cout << endl;

    cout << "Bubble sort." << endl;
    // Bubble sort in linkedlist.
    cout << "AfterBubble sort." << endl;
    bubbleSort(head);
    print(head);

    cout << "Swaping elements in linkedlist." << endl;
    cout << "swaping 12 and 15 in linkedlist." << endl;
    swapElementsInLinkedlist(12, 15, head);

    return 0;
}