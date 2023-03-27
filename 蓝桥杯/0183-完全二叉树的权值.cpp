//前缀和加速
#include <iostream>
using namespace std;

int a[100002];

int main()
{
  int n,temp,max,level=1,ans=0;
  cin>>n;
  a[0]=0;
  for(int i=1;i<=n;i++){
    cin>>temp;
    a[i]=a[i-1]+temp;
  }
  max=a[1];
  temp=4;
  while(1){
    level++;
    if(temp-1>n){
      if(max<a[n]-a[temp/2-1]){
      max=a[n]-a[temp/2-1];
      ans=level;
      }
      break;
    }
    if(max<a[temp-1]-a[temp/2-1]){
      max=a[temp-1]-a[temp/2-1];
      ans=level;
    }
    temp*=2;
  }
  cout<<ans;
  return 0;
}
