#include <iostream>
#include <vector>
using namespace std;
void PrintArray(vector<int> num)
{
    for (int i = 0; i < num.size(); i++)
    {
        cout << num.at(i) << " ";
    }
    cout << endl;
}
int FirstElement(vector<int> &A, int k)
{
    int first = 0, last = A.size() - 1, mid = first + (last - first) / 2;
    int ans = -1;

    while (first <= last)
    {
        if (A[mid] == k)
        {
            ans = mid;
            last = mid - 1;
        }
        else if (k > A[mid])
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }

        mid = first + (last - first) / 2;
    }

    return ans;
}
int LastElement(vector<int> &A, int k)
{
    int first = 0, last = A.size() - 1, mid = first + (last - first) / 2;
    int ans = -1;

    while (first <= last)
    {
        if (A[mid] == k)
        {
            ans = mid;
            first = mid + 1;
        }
        else if (k > A[mid])
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }

        mid = first + (last - first) / 2;
    }

    return ans;
}
pair<int, int> FirstLastElement(vector<int> &A, int k)
{
    pair<int, int> _temp(-1, -1);
    _temp.first = FirstElement(A, k);
    _temp.second = LastElement(A, k);
    return _temp;
}
int main()
{
    int n;
    vector<int> num;
    cout << "Enter the Size of the Array: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cout << "Enter " << i + 1 << " Vector Element: ";
        cin >> temp;
        num.push_back(temp);
    }

    PrintArray(num);
    int key;
    cout << "Enter Element You Want To Search: ";
    cin >> key;

    pair<int, int> _t = FirstLastElement(num, key);

    cout << _t.first;
    cout << _t.second;
    return 0;
}