//典型前缀和
#include <iostream>
using namespace std;

long long a[200001];

int main()
{
  int n,temp;
  long long ans=0;
  cin>>n;
  a[0]=0;
  for(int i=1;i<=n;i++){
    cin>>temp;
    a[i]=a[i-1]+temp;
  }
  for(int i=1;i<=n;i++){
    ans+=((a[i]-a[i-1])*(a[n]-a[i]));
  }
  cout<<ans;
  return 0;
}
