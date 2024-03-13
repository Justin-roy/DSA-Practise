#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int getPairsCount(int arr[], int n, int k)
{
    unordered_map<int, int> freq;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        // a + b = k;
        int b = arr[i];
        int a = k - b;
        cnt += freq[a];
        freq[b]++;
    }

    return cnt; 
}
int main()
{
    int arr[] = {1, 1, 1, 1};
    cout << getPairsCount(arr, 4, 2);
    return false;
}