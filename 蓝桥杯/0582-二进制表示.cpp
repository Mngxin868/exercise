#include <iostream>
using namespace std;
int main()
{
  int ans=1,num=1;
  while(1){
    if(num>=10000) break;
    num = num << 1;
    ans++;
  }
  cout<<ans-1;
  return 0;
}
