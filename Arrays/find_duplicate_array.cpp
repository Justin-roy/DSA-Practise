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
void DuplicateArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (A[i] == A[j])
            {
                cout << A[j] << " ";
            }
        }
    }
    cout << endl;
}
int DuplicateArray2(int A[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ A[i];
    }
    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i;
    }

    return ans;
}
// Find Duplicate using cyclic sort (this algo will work for 1 to N)
int DuplicateArray3(int A[], int size)
{
    int dup = 0;
    for (int i = 0; i < size; i++)
    {
        int correctIndex = i + 1;
        if (correctIndex != A[i])
        {
            dup = A[i];
        }
    }
    return dup;
}
int main()
{
    int Dup[10] = {1, 2, 4, 3, 5, 4, 6, 7, 5, 1};
    int Dup2[5] = {1, 2, 3, 4, 3};
    int Dup3[6] = {1, 2, 3, 4, 3, 6};
    int size = sizeof(Dup) / sizeof(Dup[0]);
    int size2 = sizeof(Dup2) / sizeof(Dup2[0]);
    int size3 = sizeof(Dup3) / sizeof(Dup3[0]);
    PrintArray(Dup, size);
    DuplicateArray(Dup2, size);
    PrintArray(Dup2, size2);
    cout << "Duplicate Xor is: " << DuplicateArray2(Dup2, size2) << endl;
    PrintArray(Dup3, size3);
    cout << "Duplicate Using Cyclic Sort: " << DuplicateArray3(Dup3, size3) << endl;
    return 0;
}