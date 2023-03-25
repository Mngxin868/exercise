//多加第k张卡增加了k种方案
#include <iostream>
using namespace std;
int main()
{
  int n,ans=1,sum=0;
  cin>>n;
  for(;;ans++){
    sum+=ans;
    if(sum>=n) break;
  }
  cout<<ans;
  return 0;
}
