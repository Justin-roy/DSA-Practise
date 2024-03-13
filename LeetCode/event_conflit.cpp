#include <iostream>
#include <string>
#include <vector>
using namespace std;

// checking 24-time formate
int convertToInt(string str, bool rev = false)
{
  int val = 0;
  if (!rev)
  {
    for (int i = 0; i < 2; i++)
      val = val * 10 + (str[i] - '0');
  }
  else
  {
    for (int i = 3; i <= 4; i++)
      val = val * 10 + (str[i] - '0');
  }
  return val;
}
bool haveConflict2(vector<string> event1, vector<string> event2)
{
  int s0 = convertToInt(event1[0]) * 60 + convertToInt(event1[0], true);
  int s1 = convertToInt(event1[1]) * 60 + convertToInt(event1[1], true);
  int e0 = convertToInt(event2[0]) * 60 + convertToInt(event2[0], true);
  int e1 = convertToInt(event2[1]) * 60 + convertToInt(event2[1], true);
  return s1 >= e0 && s0 <= e1;
}
bool haveConflict(vector<string> event1, vector<string> event2)
{
  string str1 = event2[0].substr(0, 2);
  string str2 = event2[0].substr(3, 5);
  int val1 = stoi(str1) * 60;
  int val2 = stoi(str2);
  int e2 = val1 + val2;
  int e1 = stoi(event1[1].substr(0, 2)) * 60 + stoi(event1[1].substr(3, 5));

  int e22 = stoi(event2[1].substr(0, 2)) * 60 + stoi(event2[1].substr(3, 5));
  int e11 = stoi(event1[0].substr(0, 2)) * 60 + stoi(event1[0].substr(3, 5));
  return e1 >= e2 && e11 <= e22;
}

int main()
{
  cout << haveConflict2(
      {"00:39", "09:07"}, {"10:00", "13:51"});
  return false;
}