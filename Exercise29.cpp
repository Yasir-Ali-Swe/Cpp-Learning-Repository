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

    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    cout << "Sum of array elements is : " << sum << endl;
    return 0;
}