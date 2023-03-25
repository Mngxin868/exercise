//暴力枚举
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=0;i*i<=n/4;i++){
    for(int j=i;j*j<=(n-i*i)/3;j++){
      for(int k=j;k*k<=(n-i*i-j*j)/2;k++){
        for(int t=k;t*t<=n;t++){
          if(i*i+j*j+k*k+t*t==n){
            cout<<i<<" "<<j<<" "<<k<<" "<<t;
            return 0;
          }
        }
      }
    }
  }
  return 0;
}
