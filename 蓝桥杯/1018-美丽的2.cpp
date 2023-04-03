#include <iostream>
using namespace std;

bool check(int num){
  while(num>0){
    if(num%10==2) return true;
    num/=10;
  }
  return false;
}

int main()
{
  int ans=0;
  for(int i=1;i<=2020;i++){
    if(check(i)) ans++;
  }
  cout<<ans;
  return 0;
}
