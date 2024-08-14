#include <iostream>
using namespace std;
int main()
{
    int number = 10;

    // Pointer declaration and inilization

    int *ptr = &number;

    // Dereference of Pointer

    cout << "Value store in pointer ptr is..." << endl;
    cout << *ptr << endl;

    int number2 = 20;

    // Pointing the pointer with another variable

    ptr = &number2;

    // Dereference of Pointer
    cout << "Another Value store in pointer ptr is..." << endl;
    cout << *ptr << endl;

    // Declaring an array uisng pointer
    cout << "Declaring and inilizing array using pointers." << endl;
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    // declaration of array using pointer
    int *arr = new int[n];
    // inilizing array using pointer
    cout << "Enter the elements of Array...." << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> *(arr + i);
    }

    // printing elements of array using pointer
    cout << "Printing elements of array using pointer..." << endl;
    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    return 0;
}