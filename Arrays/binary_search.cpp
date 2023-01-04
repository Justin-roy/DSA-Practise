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
int BinarySearch(int arr[], int size, int key)
{
    int low = 0, high = size - 1, mid = low + (high - low) / 2;
    while (low <= high)
    {
        if (arr[mid] == key)
        {
            return key;
        }
        else if (key > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        mid = low + (high - low) / 2;
    }
    return -1;
}
int main()
{
    int arr[10] = {2, 5, 8, 12, 25, 26, 30, 31, 40, 100};
    int arr2[9] = {2, 5, 8, 12, 25, 26, 30, 31, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << BinarySearch(arr, size, 18) << endl;
    cout << BinarySearch(arr2, 9, 18) << endl;
    return 0;
}