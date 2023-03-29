#include <iostream>
using namespace std;

bool check(int num){
  while(num>0){
    if(num%10==1||num%10==0||num%10==2||num%10==9) return true;
    num/=10;
  }
  return false;
}

int main()
{
  int ans=0;
  for(int i=1;i<2020;i++){
    if(check(i)) ans+=i;
  }
  cout<<ans;
  return 0;
}
