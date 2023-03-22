#include <iostream>
using namespace std;

int gcd(int a,int b){
  if(b==0) return a;
  return gcd(b,a%b);
}

int main()
{
  int ans=2019+2020;  //不理解为什么1的时候，1在分子和分母都算作分数
  for(int i=2;i<=2020;i++){
    for(int j=i+1;j<=2020;j++){
      if(gcd(i,j)==1) ans+=2;
    }
  }
  cout<<ans;
  return 0;
}
