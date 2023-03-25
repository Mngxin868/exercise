#include <iostream>
using namespace std;
int main()
{
  int n,m,t,k,a[101][101]={0},b,c,ans=0;
  cin>>n>>m>>t;
  for(int i=0;i<t;i++){
    cin>>b>>c;
    a[b][c]=1;
  }
  cin>>k;
  for(int i=0;i<k;i++){
    for(int j=0;j<n;j++){
      for(int k=0;k<m;k++){
        if(a[j][k]==1){
          if(j-1>=0) a[j-1][k]=1;
          if(j+1<n) a[j+1][k]=1;
          if(k-1>=0) a[j][k-1]=1;
          if(k+1<m) a[j][k+1]=1;
        }
      }
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(a[i][j]==1) ans++;
    }
  }
  cout<<ans;
  return 0;
}
