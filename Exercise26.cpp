#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout << "Enter the elements of array of length 5...." << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "All the elements you inserted in the array is...." << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}