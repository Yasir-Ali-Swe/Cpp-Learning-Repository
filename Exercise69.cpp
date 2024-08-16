#include <iostream>
using namespace std;
class Node
{
private:
    int Data;
    Node *Next;

public:
    void setData(int data)
    {
        Data = data;
    }
    int getData()
    {
        return Data;
    }
    void setNext(Node *next)
    {
        Next = next;
    }
    Node *getNext()
    {
        return Next;
    }
};
int main()
{
    cout << "Node 1 is " << endl;
    Node node1;
    node1.setData(12);
    cout << "Data in node1 is " << node1.getData() << endl;
    node1.setNext(NULL);
    cout << "Address of node1 is " << node1.getNext() << endl;

    cout << endl;
    cout << "Node 2 is " << endl;
    Node node2;
    node2.setData(13);
    cout << "Data in node2 is " << node2.getData() << endl;
    node2.setNext(NULL);
    cout << "Address of node2 is " << node2.getNext() << endl;
}