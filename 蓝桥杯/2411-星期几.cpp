#include <iostream>
using namespace std;
int main()
{
  int w,n,ans;
  cin>>w>>n;
  ans=(w+n)%7;
  if(ans==0) ans=7;
  cout<<ans;
  return 0;
}
