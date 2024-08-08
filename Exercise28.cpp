#include <iostream>
using namespace std;
void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void sortArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    displayArray(arr, n);
}

int main()
{
    int arr[5];
    cout << "Enter the elements of array of length 5...." << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "Original array is..." << endl;
    displayArray(arr, 5);
    cout << "Sorted array is...." << endl;
    sortArray(arr, 5);
    return 0;
}