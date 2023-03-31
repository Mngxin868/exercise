#include <iostream>
using namespace std;
int main()
{
  int num=1543,ans=0;
  while(num>0){
    if(num%2==1){
      num--;
      ans++;
    }
    num/=2;
  }
  cout<<ans;
  return 0;
}
