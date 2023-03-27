#include <iostream>
using namespace std;
int main()
{
  long long a,b,n,c,ans=0;
  cin>>a>>b>>n;
  c=a*5+b*2;
  ans+=(n/c)*7;
  c=n%c;
  if(c>a*5&&c<=a*5+b) ans+=6;
  else if(c>a*5+b&&c<=a*5+2*b) ans+=7;
  else{
    for(int i=1;i<=5;i++){
      if(c<=a*i&&c>0){
        ans+=i;
        break;
      }
    }
  }
  cout<<ans;
  return 0;
}
