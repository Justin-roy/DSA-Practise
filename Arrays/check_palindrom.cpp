#include <iostream>
using namespace std;
bool checkPalindrome(string st)
{
    int s = 0, e = st.size() - 1;
    while (s >= e)
    {
        if (st[s] != st[e])
            return false;
        s++;
        e--;
    }
    return true;
}
int main()
{
    string st = "LOL";
    cout << checkPalindrome(st);
    return 0;
}