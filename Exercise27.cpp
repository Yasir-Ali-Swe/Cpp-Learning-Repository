#include <iostream>
using namespace std;

// Function to display the array
void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5];

    cout << "Enter the elements of array of length 5...." << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "All the elements you inserted in the array are...." << endl;
    displayArray(arr, 5);

    for (int i = 0; i < 5 - 1; i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }

    cout << "Array after alternation...." << endl;
    displayArray(arr, 5);

    return 0;
}
