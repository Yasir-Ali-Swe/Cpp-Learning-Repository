#include <iostream>
using namespace std;
void display2dArray(int arr[][3], int r, int c)
{
    cout << "2D array colum wise print...." << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
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
    display2dArray(arr, r, c);
}
int main()
{
    int row = 3;
    int colm = 3;
    int arr[3][3];
    inputIn2dArray(arr, row, colm);
}