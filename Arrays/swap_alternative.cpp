#include <iostream>
using namespace std;
// Swap Alternative
void PrintArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << A[i];
    }
    cout << endl;
}
void SwapAlertNative(int A[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(A[i], A[i + 1]);
        }
    }
}
int main()
{
    int A[6] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(A) / sizeof(A[0]);

    PrintArray(A, size);
    SwapAlertNative(A, size);
    PrintArray(A, size);
    return 0;
}