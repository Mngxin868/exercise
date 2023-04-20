#include <iostream>
using namespace std;

int arr[101][101]={0};

int main()
{
  int ans=0;
  int n,m,k;
  int r1,c1,r2,c2;
  cin>>n>>m;
  cin>>k;
  for(int i=0;i<k;i++){
    cin>>r1>>c1>>r2>>c2;
    for(int x=r1;x<=r2;x++){
      for(int y=c1;y<=c2;y++){
        arr[x][y]=1;
      }
    }
  }
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      if(!arr[i][j]) ans++;
    }
  }
  cout<<ans;
  return 0;
}
