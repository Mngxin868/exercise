#include <iostream>
using namespace std;

bool check(int num){
  int ans=0;
  for(int i=1;i*i<=num;i++){
    if(num%i==0) ans+=2;
    if(i*i==num) ans-=1;
  }
  if(ans==100) return true;
  return false;
}

int main()
{
  for(int i=100;;i++){
    if(check(i)){
      cout<<i;
      return 0;
    }
  }
  return 0;
}
