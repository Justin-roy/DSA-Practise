#include <iostream>
#include <vector>
using namespace std;
void PrintVector(vector<vector<int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << ",";
        }
        cout << "], ";
    }
    cout << endl;
}
// if m and n is equal
vector<vector<int>> transpose(vector<vector<int>> &matrix)
{

    int size = matrix.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i != j) // skipping diagonal values
                swap(matrix[i][j], matrix[j][i]);
        }
    }
    PrintVector(matrix);
    return matrix;
}

int main()
{
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}}; //{{2, 4, -1}, {-10, 5, 11}, {18, -7, 6}};

    transpose(v);

    return 0;
}