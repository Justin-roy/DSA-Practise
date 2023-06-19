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

vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
{
    int size = image.size();

    for (int i = 0; i < size; i++)
    {
        int k = image[i].size();
        for (int j = 0; j < image[i].size(); j++)
        {
            // Swapping here
            --k;

            if (k < j)
            {
                break;
            }

            int temp = image[i][j];
            image[i][j] = image[i][k];
            image[i][k] = temp;
            PrintVector(image);
        }
    }

    // changing zero to one 0r one to zero
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < image[i].size(); j++)
        {
            // 0 to 1 or 1 to 0
            if (image[i][j] == 0)
                image[i][j] = 1;
            else
                image[i][j] = 0;
        }
    }
    return image;
}

int main()
{
    vector<vector<int>> image = {{1, 1, 0, 0}, {1, 0, 0, 1}, {0, 1, 1, 1}, {1, 0, 1, 0}};
    flipAndInvertImage(image);
    return 0;
}
