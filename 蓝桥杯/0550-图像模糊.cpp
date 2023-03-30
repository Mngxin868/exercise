#include <iostream>
using namespace std;

int a[101][101];

int main()
{
  int n,m;
  cin>>n>>m;
  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
      cin>>a[i][j];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      int num=0,sum=0;
      for(int x=max(0,i-1);x<min(n,i+2);x++)
        for(int y=max(0,j-1);y<min(m,j+2);y++){
          num++;
          sum+=a[x][y];
        }
      cout<<sum/num<<" ";
    }
    cout<<endl;
  }
  return 0;
}
