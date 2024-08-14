#include <iostream>
using namespace std;
void ascindingSorting(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void print(int *arr, int n)
{
    cout << "Array after Ascinding sorting using bubble sort is...." << endl;
    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter the size of : ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements of Array..." << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ascindingSorting(arr, n);
    print(arr, n);
    delete[] arr;
    return 0;
}