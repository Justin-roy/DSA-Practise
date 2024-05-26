#include <iostream>
using namespace std;
void PrintPatter9(int n)
{
    int count = (2 * n) - 1;
    for (int row = 1; row <= count; row++)
    {
        int colCount = row > n ? count - row + 1 : row;
        for (int col = 1; col <= colCount; col++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}
int main()
{
    PrintPatter9(5);
    return 0;
}