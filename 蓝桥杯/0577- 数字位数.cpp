#include <iostream>
using namespace std;
int main()
{
  int ans=0;
  for(int i=1;i<=2020;i++){
    if(i>=1&&i<10) ans++;
    else if(i>=10&&i<100) ans+=2;
    else if(i>=100&&i<1000) ans+=3;
    else ans+=4;
  }
  cout<<ans;
  return 0;
}
