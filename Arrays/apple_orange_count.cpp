#include <iostream>
#include <string>
#include <vector>
using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int a_size = apples.size();
    int o_size = oranges.size();
    int apple_count = 0;
    int orange_count = 0;
    for (int index = 0; index < a_size; index++) {
      long long int range  = a + apples[index];
       // count of range fruits
       if(range >= s && range <= t)
        apple_count++;
    }
    for (int index = 0; index < o_size; index++) {
       long long int range  = b + oranges[index];
       // count of range fruits
       if(range >= s && range <= t)
        orange_count++;
    }
   cout<<apple_count<<endl<<orange_count; 
}


int main(){
   countApplesAndOranges(2,3,1,5,{-2},{-1});
   return false;
} 