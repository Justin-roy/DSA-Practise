#include <iostream>
#include <climits>
using namespace std;
void PrintArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
void CyclicSort(int A[], int n)
{
    int i = 0;
    while (i < n)
    {

        int currentIdx = A[i] - 1;
        if (A[i] != A[currentIdx])
        {
            swap(A[i], A[currentIdx]);
        }
        else
        {
            i++;
        }
    }
}
int main()
{
    int A[5] = {2, 1, 5, 4, 3};
    CyclicSort(A, 5);
    PrintArray(A, 5);
    return 0;
}