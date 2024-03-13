#include <iostream>
#include <string>
#include <vector>
#include <limits.h>
using namespace std;

vector<int> cutTheSticks(vector<int> arr) {
  int size = arr.size(); 
  int mini = INT_MAX;
  int maxi = INT_MIN;
  vector<int> ans;
  int index = 0;
  while(index < size) {
    for (int inner = 0; inner < size; inner++) {
    if(arr.at(inner) > 0) { 
      mini = min(mini,arr[inner]);
      maxi = max(maxi,arr[inner]);
     }
    }
    // decreasing here
    for (int i = 0; i < size; i++) {
      if(arr.at(i) > 0) arr[i] -= mini;
    }
    
    // pushing element
   if(arr.at(index) > 0) ans.push_back(maxi == mini ? 1 : maxi-mini);
   
    index++;
    mini = INT_MAX;
    maxi = INT_MIN;
  }
  
  return ans;
}

int main()
{
    cutTheSticks({5, 4, 4, 2, 2, 8});
    return false;
}