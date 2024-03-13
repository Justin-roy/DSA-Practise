#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    // vector<vector<int>> arr = {{1, 3, 5},
    //                            {2, 6, 9},
    //                            {3, 6, 9}};
                               
    vector<vector<int>> arr = {{1},
                               {2},
                               {3}};
    int r = 3, c = 1, total = r*c;
    int s = 1, e = total, ans = 0;


    while (s <= e)
    {
        int mid = s + (e - s) / 2; // 4
        int up = 0;
        for (int row = 0; row < r; row++)
        {
            up += upper_bound(arr[row].begin(), arr[row].end(), mid) - arr[row].begin();
        }

        if (up > total/2)
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    // Brute Force Approach

    // vector<int> res;

    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         res.push_back(arr[i][j]);
    //     }
    // }

    // sort(res.begin(), res.end());

    // int mid = res[res.size() / 2];
    cout << "Middle Element Is: " << ans << endl;
    return false;
}