#include <iostream>
using namespace std;
int main()
{
  int W,H,n,r,ans=0;
  int x[101],y[101];
  int map[101][101]={0};
  cin>>W>>H>>n>>r;
  for(int i=0;i<n;i++){
    cin>>x[i]>>y[i];
    for(int j=max(0,x[i]-r);j<=min(W,x[i]+r);j++){
      for(int k=max(0,y[i]-r);k<=min(H,y[i]+r);k++){
        if((j-x[i])*(j-x[i])+(k-y[i])*(k-y[i])<=r*r)
          map[j][k]=1;
      }
    }
  }
  for(int i=0;i<=W;i++){
    for(int j=0;j<=H;j++){
      if(map[i][j]) ans++;
    }
  }
  cout<<ans;
  return 0;
}
