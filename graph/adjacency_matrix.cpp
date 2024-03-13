#include <iostream>
#include <string>
using namespace std;
void PrintArray(int arr[][2])
{
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 2; j++)
      {
         cout << arr[i][j] << " ";
      }
      cout << endl;
   }
   cout << endl;
}

void Adjacency(int arr[][2])
{
   int ans[3][3] = {0};
   for (int i = 0; i < 3; i++)
   {
     int r = arr[i][1];
     ans[i][r] = 1;
   }
   cout << endl;
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         cout << ans[i][j] << " ";
      }
      cout << endl;
   }
   cout << endl;
}
int main()
{

   int arr[3][2] = {{0, 1}, {1, 2}, {2, 0}};
   PrintArray(arr);
   Adjacency(arr);
   return false;
}