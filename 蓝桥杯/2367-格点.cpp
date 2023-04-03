#include <iostream>
using namespace std;
int main()
{
  int n=2021,ans=0;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(i*j<=2021) ans++;
    }
  }
  cout<<ans;
  return 0;
}
