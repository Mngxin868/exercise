//本质是找规律，注意对称性
#include <iostream>
using namespace std;
int main()
{
  int ans,n;
  cin>>n;
  ans=2*(n-1);
  for(int i=0;i<n/2;i++){
    cout<<ans<<endl;
    ans-=2;
  }
  if(n%2==1) cout<<ans<<endl;
  for(int i=(n+1)/2;i<n;i++){
    ans+=2;
    cout<<ans<<endl;
  }
  return 0;
}
