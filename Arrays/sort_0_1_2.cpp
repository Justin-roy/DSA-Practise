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
void SortZeroOneTwos(int arr[], int n)
{
    int low = 0, high = n - 1, mid = 0;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            mid++;
            low++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main()
{
    int arr[8] = {0, 1, 1, 0, 0, 2, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    SortZeroOneTwos(arr, size);
    PrintArray(arr, size);
    return 0;
}