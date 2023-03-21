//会超时，但能得到正确结果
#include <iostream>
using namespace std;
int main()
{
  long long n=2021041820210418,ans=0;
  for(long long i=1;i*i*i<=n;i++){
    if(n%i==0){
      for(long long j=i;i*j*j<=n;j++){
        if(n/i%j==0){
          long long k=n/i/j;
          if(i==j&&j==k) ans++;
          else if(i==j||j==k||i==k) ans+=3;
          else ans+=6;
        }
      }
    }
  }
  cout<<ans;
  return 0;
}
