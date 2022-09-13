#include <iostream>
#include <vector>
using namespace std;
void PrintArray(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }
    cout << endl;
}
bool findOccurrences(int A[], int size)
{
    int countArray[size];
    for (int i = 0; i < size; i++)
    {
        countArray[i] = A[i] % 10;
    }
    return false;
}
int main()
{
    int n;
    cout << "Enter the Size of the Vector: ";
    cin >> n;
    vector<int> Varr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        Varr.push_back(x);
    }
    PrintArray(Varr);
    return 0;
}