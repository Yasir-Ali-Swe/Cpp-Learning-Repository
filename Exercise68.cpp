#include <iostream>
using namespace std;
void find_min_max(int *arr, int n, int &min, int &max)
{
    min = *(arr + 1);
    max = *(arr + 1);
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) > max)
        {
            max = *(arr + i);
        }
        if (*(arr + i) < min)
        {
            min = *(arr + i);
        }
    }
}
int main()
{
    int n, min, max;
    cout << "Enter the size of Array : ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements of Array...." << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> *(arr + i);
    }
    find_min_max(arr, n, min, max);
    cout << "Min value is " << min << " and Max value is " << max << endl;
    return 0;
}