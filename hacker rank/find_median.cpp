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
int findMedian(vector<int> arr)
{
    int size = arr.size();
    int i = 1, j;
    int val;
    while (i < size)
    {
        val = arr.at(i);
        j = i - 1;
        while (j >= 0)
        {
            if (arr.at(j) > val)
            {
                arr[j + 1] = arr[j];
            }
            j--;
        }
        arr[j + 1] = val;
        i++;
    }

    PrintVector(arr);

    int mid = size / 2;

    return arr.at(mid);
}

int main()
{
    cout << findMedian({0, 1, 2, 4, 6, 5, 3});
    return false;
}