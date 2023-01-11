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
void BubbleSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        bool alreadySorted = false;
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                alreadySorted = true;
                swap(arr[j], arr[j + 1]);
            }
        }
        if (!alreadySorted)
            break;
    }
}
int main()
{
    // int arr[5] = {64, 25, 12, 22, 11};
    int arr[5] = {1, 2, 3, 5, 11};
    BubbleSort(arr, 5);
    PrintArray(arr, 5);
    return 0;
}