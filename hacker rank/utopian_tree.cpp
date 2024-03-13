#include <iostream>
#include <string>
using namespace std;

int utopianTree(int n) {
   if(n==0) return 1;
   int h = 2;
   for (int index = 2; index<=n; index++) {
     // summer  
     if(n % 2 == 0 ) h += 1;
     // spring
     else h *= 2;
   }
   
   return h;
}
int main(){
   cout << utopianTree(4);
   return false;
} 