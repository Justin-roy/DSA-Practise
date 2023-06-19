#include <iostream>
#include <vector>
using namespace std;

int maximumWealth(vector<vector<int>> &accounts)
{

    int maxi = 0;
    int size = accounts.size();
    int j = 0;
    int i = 0;
    while (i < size)
    {
        maxi = max(accounts[i][j], maxi);

        if (j < accounts[j].size())
        {
            j = 0;
        }
    }
    return maxi;
}

int main()
{
    vector<vector<int>> vect{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    cout << vect.size(); // maximumWealth(vect);
    return 0;
}