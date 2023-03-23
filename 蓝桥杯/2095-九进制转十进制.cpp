#include <iostream>
using namespace std;
int main()
{
  int ans=0,num=2022,key=1;
  while(num>0){
    ans+=(num%10*key);
    key*=9;
    num/=10;
  }
  cout<<ans;
  return 0;
}
