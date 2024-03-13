#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
bool findVec(vector<int> &v, int m)
{
    if (v.empty())
        return false;
    for (auto i : v)
        if (i == m)
            return true;
    return false;
}

vector<vector<int>> findWinners(vector<vector<int>> &matches)
{
    unordered_map<int, int> lost_map;
    for (int i = 0; i < matches.size(); i++)
    {
        int lose = matches[i][1];
        lost_map[lose]++;
    }
    vector<int> notLost;
    vector<int> onceLost;
    for (int i = 0; i < matches.size(); i++)
    {
        int winner = matches[i][0];
        int looser = matches[i][1];
        if (lost_map.find(winner) == lost_map.end())
        {
            notLost.push_back(winner);
            lost_map[winner] = 2;
        }
        if (lost_map[looser] == 1)
            onceLost.push_back(looser);
    }
    sort(notLost.begin(), notLost.end());
    sort(onceLost.begin(), onceLost.end());

    return {notLost, onceLost};
}
vector<vector<int>> findWinners3(vector<vector<int>> &matches)
{
    unordered_map<int, int> lost_map;
    for (int i = 0; i < matches.size(); i++)
    {
        int lose = matches[i][1];
        lost_map[lose]++;
    }
    vector<int> notLost;
    vector<int> onceLost;
    for (int i = 0; i < matches.size(); i++)
    {
        int winner = matches[i][0];
        int looser = matches[i][1];
        if (!(lost_map.count(winner)))
        {
            if (!(findVec(notLost, winner)))
             notLost.push_back(winner);
        }
        if (lost_map[looser] == 1)
         onceLost.push_back(looser);
    }
    sort(notLost.begin(), notLost.end());
    sort(onceLost.begin(), onceLost.end());

    return {notLost, onceLost};
}
vector<vector<int>> findWinners2(vector<vector<int>> &matches)
{
    vector<int> winners;
    vector<int> looser;
    int row = matches.size();
    int cnt = 0;
    bool flag = false;
    for (int i = 0; i < row; i++)
    {
        int val = matches[i][0];
        for (int j = 0; j < row; j++)
        {
            int loss = matches[j][1];
            if (val == loss)
            {
                flag = false;
                break;
            }
            else
            {
                flag = true;
            }
        }
        if (flag && !(findVec(winners, val)))
            winners.push_back(val);
    }
    for (int i = 0; i < row; i++)
    {
        int val = matches[i][1];
        for (int j = 0; j < row; j++)
        {
            int loss = matches[j][1];

            if (val == loss)
            {
                ++cnt;
                if (cnt == 2)
                {
                    cnt = 0;
                    break;
                }
            }
        }
        if (cnt == 1)
        {
            cnt = 0;
            if (!(findVec(looser, val)))
                looser.push_back(val);
        }
    }
    sort(winners.begin(), winners.end());
    sort(looser.begin(), looser.end());
    return {winners, looser};
}

int main()
{
    vector<vector<int>> arr = {
        {1, 3},
        {2, 3},
        {3, 6},
        {5, 6},
        {5, 7},
        {4, 5},
        {4, 8},
        {4, 9},
        {10, 4},
        {10, 9},
    };
    vector<vector<int>> vec = findWinners(arr);
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }
    return false;
}