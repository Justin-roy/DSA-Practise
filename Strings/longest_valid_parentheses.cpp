#include <iostream>
#include <string>
#include <stack>
using namespace std;

int checkValidParenthese(string theses)
{

    if (theses.empty())
        return theses.length();
    int cnt = 0;
    int size = theses.size();
    int lcnt = 0;

    for (int i = 0; i < size; i++)
    {
        if ('(' == theses[i])
        {
            lcnt++;
            if ((i + 1 < size) && ')' == theses[i + 1])
                cnt = cnt + 2;
            else if (cnt > 0)
                break;
        }
    }

    int rcnt = size - lcnt;

    if (rcnt == lcnt)
        return size;

    return cnt;
}

int longestValidParentheses(string s)
{
    int n = s.length();

    stack<int> st;
    int trash = 0;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (s[i - 1] == '(')
        {
            st.push(i);
        }
        else
        {
            if (st.empty())
            {
                trash = i;
                continue;
            }
            else
            {
                st.pop();
            }
            if (st.empty())
            {
                ans = max(ans, (int)(i - trash));
            }
            else
            {
                ans = max(ans, (int)(i - st.top()));
            }
        }
    }
    return ans;
}
int main()
{
    cout << longestValidParentheses("()(())");
    return false;
}