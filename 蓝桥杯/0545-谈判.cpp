#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int a[1001],n,ans=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a,a+n);
  for(int i=0;i<n;i++){
    ans+=(a[i]*(n-i));
  }
  cout<<ans-a[0];
  return 0;
}
