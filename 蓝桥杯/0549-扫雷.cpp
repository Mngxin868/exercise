#include <iostream>
using namespace std;

int a[101][101];

int main()
{
  int n,m,temp;
  cin>>n>>m;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>a[i][j];
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(a[i][j]) cout<<9<<" ";   //该处为雷
      else{   //检查周围
        temp=0;
        for(int x=max(0,i-1);x<min(n,i+2);x++){
          for(int y=max(0,j-1);y<min(m,j+2);y++){
            if(a[x][y]) temp++;
          }
        }
        cout<<temp<<" ";
      }
    }
    cout<<endl;
  }
  return 0;
}
