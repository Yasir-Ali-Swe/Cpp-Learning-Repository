#include <iostream>
using namespace std;
void twodArraySum(int arr[][3], int r, int c)
{
    int sum = 0;
    cout << "2D array sum calculating...." << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum += arr[i][j];
        }
    }
    cout << "Sum is " << sum << endl;
}
void inputIn2dArray(int arr[][3], int r, int c)
{
    cout << "Enter the elements of 2D array....." << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    twodArraySum(arr, r, c);
}
int main()
{
    int row = 3;
    int colm = 3;
    int arr[3][3];
    inputIn2dArray(arr, row, colm);
}