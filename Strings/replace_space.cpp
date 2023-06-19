#include <iostream>
using namespace std;
void PrintArray(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;
}
string replaceSpace(string str)
{
    string temp = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
            temp.push_back(str[i]);
    }
    str = temp;
    temp.clear();
    return str;
}
string replaceSpace2(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
            str.replace(i, 1, "@40");
    }
    return str;
}
int main()
{
    string str = "Justin gmail.com";
    string rstr = replaceSpace2(str);
    PrintArray(rstr);
    return 0;
}