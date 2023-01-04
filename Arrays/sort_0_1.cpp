#include <iostream>
using namespace std;
void PrintArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << A[i];
    }
    cout << endl;
}
void SortZeroOnes(int arr[], int n)
{
    int i = 0, j = n;

    while (i < j)
    {
        if (arr[i] == 1 && arr[j] == 0)
        {
            swap(arr[i], arr[j]);
        }
        else if (arr[i] == 0)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
}
int main()
{
    int arr[6] = {0, 1, 1, 0, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    SortZeroOnes(arr, size);
    PrintArray(arr, size);
    return 0;
}