#include <iostream>
using namespace std;
class MinHeap
{
public:
    int arr[100];
    int size;
    MinHeap()
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
            if (arr[parent] > arr[index])
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
        arr[1] = arr[size]; // Replace root with the last element
        size--;

        int i = 1;
        while (true)
        {
            int leftChild = 2 * i;
            int rightChild = 2 * i + 1;
            int smallest = i;

            if (leftChild <= size && arr[leftChild] < arr[smallest])
            {
                smallest = leftChild;
            }
            if (rightChild <= size && arr[rightChild] < arr[smallest])
            {
                smallest = rightChild;
            }

            if (smallest != i)
            {
                swap(arr[i], arr[smallest]);
                i = smallest;
            }
            else
            {
                break;
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
    MinHeap mHeap;
    mHeap.insert(50);
    mHeap.insert(55);
    mHeap.insert(53);
    mHeap.insert(52);
    mHeap.insert(54);
    cout << "---------Min Heap---------" << endl;
    mHeap.print();
    cout << "---------Delition in Max Heap---------" << endl;
    mHeap.deleteFromHeap();
    mHeap.print();
    return 0;
}