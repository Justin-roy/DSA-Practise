#include <iostream>
using namespace std;
void OccurranceString(string occ)
{
    // case 1: create 26 size of array
    int arr[26] = {0};
    // case 2: get the occurrance count
    for (int i = 0; i < occ.length(); i++)
    {
        int num = occ[i] - 'a';
        arr[num]++;
    }
    int maxi = 0;
    int ans;
    // case 3: get maxi
    for (int j = 0; j < 26; j++)
    {
        if (arr[j] > maxi)
        {
            maxi = arr[j];
            ans = j;
        }
    }
    char finalAns = 'a' + ans;
    cout << finalAns << " : " << maxi << endl;
}
int main()
{
    string str = "test";
    OccurranceString(str);
    return 0;
}