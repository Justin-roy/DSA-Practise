#include <iostream>
#include <climits>
using namespace std;
// Time - O(N)
// Space - Constant
void PrintArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
int FindMiniMum(int arr[], int size, int idx)
{
    int min = INT_MAX;
    int index = -1;
    for (int i = idx; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            index = i;
        }
    }
    return index;
}
void SelectionSort(int arr[], int size)
{
    int i = 0;
    int minIndex = -1;
    while (i < size)
    {
        minIndex = FindMiniMum(arr, size, i);
        swap(arr[i], arr[minIndex]);
        i++;
    }
}
int main()
{
    int arr[5] = {64, 25, 12, 22, 11};
    SelectionSort(arr, 5);
    PrintArray(arr, 5);
    return 0;
}