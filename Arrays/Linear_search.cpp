#include <iostream>
using namespace std;
// Linear Search

bool LinearSearch(int A[], int size, int key)
{
    bool isFound = 0;
    for (int i = 0; i < size; i++)
    {
        if (A[i] == key)
        {
            isFound = 1;
        }
    }
    return isFound;
}
int main()
{
    int A[5] = {1, -8, 4, 6, -7};

    int size = sizeof(A) / sizeof(A[0]);
    int key;
    cout << "Enter Element You Want To Search: ";
    cin >> key;
    bool isFound = LinearSearch(A, size, key);
    if (isFound)
        cout << "Key Found";
    else
        cout << "key Not Found";
    return 0;
}