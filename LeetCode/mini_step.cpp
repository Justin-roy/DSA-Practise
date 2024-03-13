#include <iostream>
#include <string>
#include <vector>
using namespace std;

int minSteps(string s, string t)
{
    vector<int> count_s(26, 0);
    vector<int> count_t(26, 0);

    for (char ch : s)
    {
        count_s[ch - 'a']++;
    }

    for (char ch : t)
    {
        count_t[ch - 'a']++;
    }
    int steps = 0;
    for (int i = 0; i < 26; i++)
    {
        int value1 = count_s[i];
        int value2 = count_t[i];
        int diff = abs(value1 - value2);
        cout << "Step " << i << " -> " << value1 << " - " << value2 << " = " << diff << endl;
        steps += diff;
        cout << "Final = " << steps << " + " << diff << " = " << steps << endl;
        // steps += abs(count_s[i] - count_t[i]);
    }

    return steps / 2;
}
int main()
{
    cout << minSteps("leetcode", "practice");
    return false;
}