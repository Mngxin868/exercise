#include <iostream>
using namespace std;

int check(int num){
  int ans=0;
  if(num>=20) ans+=1;   //二十开始两个数字对应三个汉字（非整十数）
  while(num>0){
    if(num%10!=0) ans++;  //整十数
    num/=10;
  }
  return ans;
}

int main()
{
  int ans=0;
  for(int i=1;i<=20;i++){
    ans+=10;  //不算数字的汉字数
    ans+=check(i)*2;
    ans+=check(2*i);
    ans+=check(4*i);
  }
  cout<<ans;
  return 0;
}
