#include <iostream>
using namespace std;
class Node
{
private:
    int Data;
    Node *Next;
    Node *Pre;

public:
    void setData(int Data)
    {
        this->Data = Data;
    }
    int getData()
    {
        return this->Data;
    }
    void setNext(Node *Next)
    {
        this->Next = Next;
    }
    Node *getNext()
    {
        return this->Next;
    }
    void setPre(Node *Pre)
    {
        this->Next = Pre;
    }
    Node *getPre()
    {
        return this->Pre;
    }
};
int main()
{
    Node *node1 = new Node();
    cout << "First node and setting its next and previous pointer...." << endl;
    node1->setData(1);
    node1->setNext(NULL);
    node1->setPre(NULL);
    cout << endl;
    cout << "node1 Data is " << node1->getData() << endl;
    cout << "node1 Next is " << node1->getNext() << endl;
    cout << "node1 Pre  is " << node1->getPre() << endl;
    delete node1;
    return 0;
}