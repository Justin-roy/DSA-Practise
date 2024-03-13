#include <iostream>
#include <string>
using namespace std;

int reverseInt(int n)
{
   int rev = 0; 
   while(n>0){
    int rem = n % 10;
    rev = (rev * 10) + rem;
    n /= 10;
   } 
   
   return rev;
}
int beautifulDays(int i, int j, int k) {
  int even_cnt = 0;
  for (int index = i; index <= j; index++) {
    // getting reverse
    int rev = reverseInt(index);
    int diff = abs(index - rev);
    // checking even
    if(diff % 2 == 0)
     even_cnt++;
  }
  
  return even_cnt;
}

int main(){
   cout << beautifulDays(13, 45, 3);
   return false;
} 