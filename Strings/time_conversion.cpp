#include <iostream>
#include <string>
using namespace std;
string getTimeConvert(int hr)
{
    string hours[] = {"00", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23"};
    return hours[hr];
}

string converToMilitaryFormate(string time)
{
        if (time[8] == 'P')
        {
            int a = time[0] - '0';
            int b = time[1] - '0';
            string concat = to_string(a) + to_string(b);
            int hour = stoi(concat);
            if (hour < 12)
            {
                string hr = getTimeConvert(hour);
                time[0] = hr[0];
                time[1] = hr[1];
            }
        }
        else if (time[8] == 'A')
        {
            if (time[0] == '1')
            {
                time[0] = '0';
                time[1] = '0';
            }
        }
    
    int new_size = time.length() - 2;
    string formateTime(new_size, '*');
    // removing AM and PM
    for (int index = 0; index < new_size; index++)
    {
        formateTime[index] = time[index];
    }

    return formateTime;
}
int main()
{
    cout << converToMilitaryFormate("13:45:54PM");

    return false;
}