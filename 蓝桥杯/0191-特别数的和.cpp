//暴力枚举
#include <iostream>
using namespace std;

bool check(int num){
  while(num>0){
    if(num%10==0||num%10==1||num%10==2||num%10==9)
      return true;
    num/=10;
  }
  return false;
}

int main()
{
  int n,sum=0;
  cin>>n;
  for(int i=1;i<=n;i++){
    if(check(i)) sum+=i;
  }
  cout<<sum;
  return 0;
}
