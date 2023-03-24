#include <iostream>
using namespace std;

bool check(int num){
  for(int i=3;i*i<=num;i++){
    if(num%i==0) return false; 
  }
  return true;
}

int main()
{
  int ans=1;  //质数2已计算
  for(int i=3;;i+=2){ //偶数不必讨论
    if(check(i)) ans++;
    if(ans==2019){
      cout<<i;
      break;
    }
  }
  return 0;
}
