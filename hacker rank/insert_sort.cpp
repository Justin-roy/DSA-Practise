#include <iostream>
#include <string>
#include <vector>
using namespace std;
void PrintVector(vector<int> v)
{
    for (int val : v)
        cout << val << " ";
    cout << endl;
}
void insertionSort2(int n, vector<int> arr)
{
    int i = 1;
    int cnt = 0;
    while (i < n)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
                ++cnt;
            }
            else
                break;
            j--;
        }
        arr[j + 1] = temp;
        i++;
        // PrintVector(arr);
    }
    PrintVector(arr);
    cout << cnt;
}

int main()
{
    insertionSort2(
       7, {0, 1, 2, 4, 6, 5, 3});
    return false;
}