#include <iostream>
#include <string>
using namespace std;

bool isLongPressedName(string name, string typed) {
        bool flag = false;
        int size = name.size();
        int size2 = typed.size();
        for(int i=0; i<size; i++)
        {
           for(int j=i; j<size2;j++){
              if(name[i] == typed[j])
              {
                continue;
                flag = true;
              }
           }
           flag = false;
        }
        return flag;
    }

int main(){
   cout << isLongPressedName("alex","aaleex");
    return false;
}    