#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
using namespace std;

vector<int> jimOrders(vector<vector<int>> orders) {
   int row = orders.size();
   int col = orders[0].size();
   int sum = 0;
   // s_sum for sorted sum
   vector<int> s_sum;
   // u_sum for unsorted sum
   vector<int> u_sum;
   for (int index = 0; index<row; index++) {
     for (int inner_index = 0; inner_index<col; inner_index++) {
       sum += orders[index][inner_index];
     }
     s_sum.push_back(sum);
     u_sum.push_back(sum);
     sum = 0;
   }
   sort(s_sum.begin(),s_sum.end());
   vector<int> ans;
   for (int index = 0; index<row; index++) {
     for (int inner_idx = 0; inner_idx<row; inner_idx++) {
       if(s_sum[index] == u_sum[inner_idx])
       {
          ans.push_back(inner_idx+1); 
       }
     }
   }
   
   // for removing duplicate
   vector<int> cus;
   for (int index = 0; index<row; index++)
    cus.push_back(ans[index]);
  return cus;
}

int main()
{
    jimOrders({
        {8, 1},
        {4, 2},
        {5, 6},
        {3, 1},
        {4, 3},

    });
    return false;
}