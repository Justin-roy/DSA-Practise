#include <iostream>
using namespace std;
bool CheckPalindrome(string st, int s, int e)
{
    if (s >= e) // base case
        return true;
    if (st[s] != st[e])
        return false;
    return CheckPalindrome(st, s + 1, e - 1);
}
int main()
{
    // string st = "Justin";
    string st = "ABA";
    cout << "Is Palindrome: ";
    cout << CheckPalindrome(st, 0, st.size() - 1);
    return 0;
}