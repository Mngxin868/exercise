#include <iostream>
using namespace std;

int a[1001][1001];

int main()
{
  int n,m;
  cin>>n>>m;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>a[i][j];
    }
  }
  for(int j=0;j<m;j++){
    for(int i=n-1;i>=0;i--){
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
