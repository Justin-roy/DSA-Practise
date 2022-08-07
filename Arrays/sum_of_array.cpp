#include <iostream>
using namespace std;
int FindSumArray(int sumArray[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += sumArray[i];
    }
    return sum;
}
int main()
{
    int sum[5] = {1, 5, 6, -6, 8};
    int size = sizeof(sum) / sizeof(sum[0]);
    int sumofArray = FindSumArray(sum, size);
    cout << "Sum Of Array Is: " << sumofArray;
    return 0;
}