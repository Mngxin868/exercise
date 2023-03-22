#include <iostream>
using namespace std;
int main()
{
  int n,m,map[101][101],ans[101][101];
  cin>>n>>m;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>map[i][j];
      ans[i][j]=-10e8;
    }
  }
  ans[0][0]=map[0][0];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      for(int x=0;x<=3;x++){
        for(int y=0;x+y<=3;y++){
            if(x==0&&y==0) continue;
            ans[i+x][j+y]=max(ans[i+x][j+y],ans[i][j]+map[i+x][j+y]);
        }
      }
    }
  }
  cout<<ans[n-1][m-1];
  return 0;
}
