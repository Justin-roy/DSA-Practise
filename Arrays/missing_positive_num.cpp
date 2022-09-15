#include <iostream>
using namespace std;
// Find Missing Positive Integer
void PrintArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
void SortArray(int A[], int size)
{
    int i = 0;
    while (i < size)
    {
        int correctIndex = A[i] - 1;
        if (A[i] != A[correctIndex] && A[i] > 0)
        {
            swap(A[i], A[correctIndex]);
        }
        else
        {
            i++;
        }
    }
}
int MissigPositive(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int cIndex = i + 1;
        if (A[i] != cIndex)
        {
            return cIndex;
        }
    }
    return 0;
}
int main()
{
    int A[4] = {3, 4, -1, 1};
    int size = sizeof(A) / sizeof(A[0]);
    SortArray(A, size);
    PrintArray(A, size);
    cout
        << MissigPositive(A, size);
    return 0;
}