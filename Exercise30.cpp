#include <iostream>
using namespace std;
void inputInArray(int arr[], int n)
{
    cout << "Enter the lements of array of length 5...." << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
}
void displayArray(int arr[], int n)
{
    cout << "You entered the following elements in array..." << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[5];
    inputInArray(arr, 5);
    displayArray(arr, 5);
    return 0;
}