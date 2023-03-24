//暴力，会超时，仅记录结果
#include <iostream>
using namespace std;
int main()
{
  long long temp;
  bool flag=false;
  for(int i=1;i<=1000000007;i++){
    temp=2021*i;
    if(temp%1000000007==999999999){
      cout<<i;
      flag=true;
    }
  }
  if(!flag) cout<<"0";
  return 0;
}
