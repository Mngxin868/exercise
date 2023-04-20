#include <iostream>
using namespace std;
int main()
{
  int n,ans=0;
  cin>>n;
  for(int i=1;i<n;i++){
    if((i*i)%n<(n+1)/2) ans++;
  }
  cout<<ans;
  return 0;
}
