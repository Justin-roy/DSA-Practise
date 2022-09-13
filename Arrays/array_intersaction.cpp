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
void ArrayIntersaction(int A[], int B[], int size1, int size2)
{
    // Worst case solution
    // That is O(size1*size2)
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (A[i] == B[j])
            {
                cout << A[i] << " ";
                B[j] = INT16_MIN;
                break;
            }
        }
    }
}
void ArrayIntersaction2(int A[], int B[], int size1, int size2)
{
    // Good solution
    // That is O(max(size1,size2))
    int i = 0, j = 0;
    while (i < size1 && j < size2)
    {
        if (A[i] == B[j])
        {
            cout << A[i] << " ";
            i++;
            j++;
        }
        else if (A[i] < B[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
}
int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    int B[4] = {0, 2, 5, 7};
    PrintArray(A, B, 5);
    ArrayIntersaction2(A, B, 5, 4);
    return 0;
}