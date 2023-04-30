#include <iostream>
using namespace std;
void PrintArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
void RotateLeft(int arr[], int n, int d)
{
    // p - how many times to rotate
    int p = 1;
    while (p <= d)
    {
        int last = arr[0];
        for (int i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = last;
        ++p;
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    RotateLeft(arr, 5, 2);
    PrintArray(arr, 5);
    return 0;
}