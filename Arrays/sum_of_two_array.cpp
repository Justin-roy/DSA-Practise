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

void ReverseArray(int A[], int size)
{
    int start, end;
    start = 0;
    end = size - 1;
    while (start <= end)
    {
        swap(A[start], A[end]);
        start++;
        end--;
    }
    PrintArray(A, size);
}

void SumTwoArray(int A[], int sizeA, int B[], int sizeB)
{
    int carry = 0, i = sizeA - 1, j = sizeB - 1;
    int sSize = sizeA > sizeB ? sizeA : sizeB;
    int sumArr[sSize] = {0};
    int k = 0;
    while (i >= 0 && j >= 0)
    {
        int sum = A[i] + B[j] + carry;
        int temp = sum % 10;
        carry = sum / 10;
        sumArr[k++] = temp;
        i--;
        j--;
    }
    // case 1
    while (i >= 0)
    {
        int sum = A[i] + carry;
        int temp = sum % 10;
        carry = sum / 10;
        sumArr[k++] = temp;
        i--;
    }
    // case 2
    while (j >= 0)
    {
        int sum = B[j] + carry;
        int temp = sum % 10;
        carry = sum / 10;
        sumArr[k++] = temp;
        j--;
    }
    // case 3
    while (carry != 0)
    {
        int sum = carry;
        int temp = sum % 10;
        carry = sum / 10;
        sumArr[k++] = temp;
    }
    // case 4
    ReverseArray(sumArr, sSize);
}

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[2] = {1, 5};
    SumTwoArray(arr1, 5, arr2, 2);
    return 0;
}