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
void InsertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
                PrintArray(arr, 5);
            }
            else
            {
                break;
            }
        }

        arr[j + 1] = temp;
    }
}
int main()
{
    int arr[5] = {2, 4, 6, 8, 3};
    InsertionSort(arr, 5);
    PrintArray(arr, 5);
    return 0;
}