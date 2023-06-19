#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void PrintVector(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int largestAltitude(vector<int> &gain)
{
    int size = gain.size();
    for (int i = 1; i < size; i++)
    {
        gain[i] = gain[i - 1] + gain[i];
    }
    int maxi = 0;
    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, gain[i]);
    }

    return maxi;
}

int main()
{
    vector<int> gain = {-4, -3, -2, -1, 4, 3, 2};
    cout << largestAltitude(gain);
    return 0;
}
