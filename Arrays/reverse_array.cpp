#include <iostream>
using namespace std;
// Reverse Array
void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void ReverseArray(int A[], int size)
{
    int start, end;
    start = 0;
    end = size - 1;
    while (start <= end)
    {
        Swap(A[start], A[end]);
        start++;
        end--;
    }
}
void PrintArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << A[i];
    }
    cout << endl;
}

int main()
{
    int A[5] = {1, 2, 4, 5, 6};
    int size = sizeof(A) / sizeof(A[0]);
    ReverseArray(A, size);
    PrintArray(A, size);
    return 0;
}