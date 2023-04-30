#include <iostream>
#include <vector>
using namespace std;
void PrintArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
void moveZeros(int arr[], int size)
{
    int i = 0, j = 0;
    while (i < size)
    {
        // ignore non-zero values
        if (arr[i] != 0)
        {

            swap(arr[i], arr[j]);
            j++;
        }
        i++;
    }
}
int main()
{
    int arr[6] = {0, 1, 0, 3, 12, 0};
    moveZeros(arr, 5);
    PrintArray(arr, 5);
    return 0;
}