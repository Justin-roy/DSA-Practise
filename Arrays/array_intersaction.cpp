#include <iostream>
using namespace std;
void PrintArray(int A[], int B[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    for (int j = 0; j < size; j++)
    {
        cout << B[j] << " ";
    }
    cout << endl;
}
void ArrayIntersaction(int A[], int B[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (A[i] == B[j])
            {
                cout << A[i] << " ";
            }
        }
    }
}
int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    int B[5] = {0, 6, 2, 7, 4};
    PrintArray(A, B, 5);
    ArrayIntersaction(A, B, 5);
    return 0;
}