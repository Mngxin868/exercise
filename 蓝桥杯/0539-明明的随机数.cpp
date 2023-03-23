#include <iostream>
using namespace std;
int main()
{
  int n,arr[1001]={0},temp,sum=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>temp;
    arr[temp]++;
    if(arr[temp]==1) sum++;
  }
  cout<<sum<<endl;
  for(int i=0;i<1001;i++){
    if(arr[i]) cout<<i<<" ";
  }
  return 0;
}
