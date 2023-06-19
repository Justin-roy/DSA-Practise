#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void reverseWordString(vector<char> &ch)
{
    vector<string> tempstr;
    string temp = "";
    for (int i = 0; i < ch.size(); i++)
    {
        temp.push_back(ch[i]);
        if (ch[i] == ' ')
        {

            tempstr.push_back(temp + " ");
            temp.clear();
        }
    }
    tempstr.push_back(temp + " ");
    temp.clear();
    reverse(tempstr.begin(), tempstr.end());
    for (int j = 0; j < tempstr.size(); j++)
    {
        cout << tempstr[j];
    }
}
int main()
{
    vector<char> str;
    str.push_back('t');
    str.push_back('h');
    str.push_back('e');
    str.push_back(' ');
    str.push_back('s');
    str.push_back('k');
    str.push_back('y');
    str.push_back(' ');
    str.push_back('i');
    str.push_back('s');
    str.push_back(' ');
    str.push_back('b');
    str.push_back('l');
    str.push_back('u');
    str.push_back('e');
    reverseWordString(str);

    return 0;
}