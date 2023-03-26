#include <iostream>
using namespace std;
int main()
{
  int num=1200000,ans=0;
  for(int i=1;i*i<num;i++){ //不是平方数,是平方数结尾加一
    if(num%i==0) ans+=2;
  }
  cout<<ans;
  return 0;
}
