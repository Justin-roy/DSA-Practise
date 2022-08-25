#include <iostream>
using namespace std;
/*
1
12
123
1234
12345
*/
int main()
{
    int patternCount = 5;
    for (int i = 0; i < patternCount; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }

    return 0;
}