//要把实例的前十个数字分开看
#include <iostream>
using namespace std;
int main()
{
  long long num=59084709587505;
  int ans=0;
  for(long long i=1;i<=num;i*=7){
    for(long long j=1;i*j<=num;j*=5){
      for(long long k=1;i*j*k<=num;k*=3){
        ans++;
      }
    }
  }
  cout<<ans-1;  //减去第一个1*1*1
  return 0;
}
