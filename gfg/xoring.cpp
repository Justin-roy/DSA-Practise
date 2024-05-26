#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Solution
{
public:
    void printArr(int n, int arr[])
    {
        for (int i = 0; i < n; i++)
         cout << arr[i] << " ";
        cout << "\n";
    }

    void setToZero(int n, int arr[])
    {
        memset(arr, 0, n * sizeof(int));
    }

    void xor1ToN(int n, int arr[])
    {
        for (int i = 0; i < n; i++)
         arr[i] ^= i;
    }
};
int main()
{
    Solution s;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    s.xor1ToN(10, arr);
    s.printArr(10, arr);
    s.setToZero(10, arr);
    s.printArr(10, arr);
    return false;
}