#include <iostream>
using namespace std;

int ans=0;
int a[10][10]={0};

void dfs(int x,int y,int num){
  if(x<0||x>=4||y<0||y>=4) return;
  if(num==16){
    ans++;
    return;
  }
  if(x+1<4&&!a[x+1][y]){  //向右
    a[x+1][y]=1;
    dfs(x+1,y,num+1);
    a[x+1][y]=0;
  }
  if(y+1<4&&!a[x][y+1]){  //向下
    a[x][y+1]=1;
    dfs(x,y+1,num+1);
    a[x][y+1]=0;
  }
  if(x-1>=0&&!a[x-1][y]){ //向左
    a[x-1][y]=1;
    dfs(x-1,y,num+1);
    a[x-1][y]=0;
  }
  if(y-1>=0&&!a[x][y-1]){ //向上
    a[x][y-1]=1;
    dfs(x,y-1,num+1);
    a[x][y-1]=0;
  }
}

int main()
{
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      a[i][j]=1;  //访问
      dfs(i,j,1);
      a[i][j]=0;  //回溯
    }
  }
  cout<<ans;
  return 0;
}
