#include <iostream>
#include <string>
#include <vector>
using namespace std;

class NextLarge
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        int maxi = target;
        int size = letters.size();
        int s = letters[0], e = letters[size - 1];

        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            if (mid > target)
            {
                maxi = mid;
                e = mid - 1;
            }
            else if (mid < maxi)
            {
                s = mid + 1;
            }
        }

        return char(maxi);
    }
};
int main()
{
    NextLarge ng;
    vector<char> data{'c', 'f', 'j'};
   cout<< ng.nextGreatestLetter(data, 'c');
    return false;
}