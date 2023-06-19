#include <iostream>
using namespace std;
void PrintPatter8(int n)
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
    PrintPatter8(5);
    return 0;
}