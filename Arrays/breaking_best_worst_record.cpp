#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> breakingRecords(vector<int> scores) {
  int maxi = scores.front();
  int mini = scores.front();
  int maxi_count = 0;
  int mini_count = 0;
  for (int val : scores) {
    //max
    if(val > maxi){
     maxi = val; 
     maxi_count++;
    }
    //min
    if(val < mini){
     mini = val; 
     mini_count++;
    }
  }
  
  return {maxi_count,mini_count};
}


int main(){
    breakingRecords({10 ,5 ,20 ,20 ,4 ,5 ,2 ,25 ,1});
   return false;
} 