#include <bits/stdc++.h>
using namespace std;

//calculate power of two
bool isPower(int num){
   return (num && !(num & (num - 1)));
}

//check if num is a proth number
bool isProthNumber(int num){
   int k = 1;
   while (k < (num / k)){
      if (num % k == 0){
         if (isPower(num / k))
            return true;
      }
      k = k + 2;
   }
   return false;
}

int main(){
   int num;
   cin >> num;
   if (isProthNumber(num - 1))
      cout << num <<" is a Proth Prime"<<endl;
   else
      cout << num << " is NOT a Proth Prime" << endl;
   return 0;
}