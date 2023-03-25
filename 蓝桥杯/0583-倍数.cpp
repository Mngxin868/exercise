#include <iostream>
using namespace std;
int main()
{
  int ans=0;
  //显然这个数是偶数
  for(int i=2;i<=2020;i+=2){
    if(i%4==0&&i%6==0) ans++;
  }
  cout<<ans;
  return 0;
}
