#include <iostream>
using namespace std;
class MaxHeap
{
public:
    int arr[100];
    int size;
    MaxHeap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insert(int value)
    {
        size = size + 1;
        int index = size;
        arr[index] = value;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }
    void deleteFromHeap()
    {
        if (size == 0)
        {
            cout << "Nothing to delete." << endl;
            return;
        }
        arr[1] = arr[size];
        size--;
        int i = 1;
        while (i < size)
        {
            int leftChild = 2 * i;
            int rightChild = 2 * i + 1;
            if (leftChild < size && arr[i] < arr[leftChild])
            {
                swap(arr[i], arr[leftChild]);
                i = leftChild;
            }
            else if (rightChild < size && arr[i] < arr[rightChild])
            {
                swap(arr[i], arr[rightChild]);
                i = rightChild;
            }
            else
            {
                return;
            }
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    MaxHeap mHeap;
    mHeap.insert(50);
    mHeap.insert(55);
    mHeap.insert(53);
    mHeap.insert(52);
    mHeap.insert(54);
    cout << "---------Max Heap---------" << endl;
    mHeap.print();
    cout << "---------Delition in Max Heap---------" << endl;
    mHeap.deleteFromHeap();
    mHeap.print();
    return 0;
}