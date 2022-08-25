#include <iostream>
using namespace std;
void PrintArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << A[i];
    }
    cout << endl;
}
int UniqueElement(int A[], int size)
{
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        // XOR
        // A ^ A = 0
        // A ^ 0 = A
        temp = temp ^ A[i];
    }
    return temp;
}
int main()
{
    int A[11] = {1, 2, 1, 3, 44, 4, 4, 3, 2, 8, 8};
    int size = sizeof(A) / sizeof(A[0]);
    cout << "Unique Element is: " << UniqueElement(A, size);
    return 0;
}