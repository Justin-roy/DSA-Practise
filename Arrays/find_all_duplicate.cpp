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
void FindDup(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        int correctIndex = i + 1;
        if (arr[i] != correctIndex)
        {
            cout << arr[i] << " ";
        }
    }
}
void Sort(int arr[], int size)
{
    int i = 0;
    while (i < size)
    {
        int correctIndex = arr[i] - 1;
        if (arr[i] != arr[correctIndex])
        {
            swap(arr[i], arr[correctIndex]);
        }
        else
        {
            i++;
        }
    }
}
int main()
{
    int arr[8] = {4, 3, 2, 7, 8, 2, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    Sort(arr, size);
    PrintArray(arr, size);
    FindDup(arr, size);
    return 0;
}