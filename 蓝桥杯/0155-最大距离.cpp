#include <iostream>
using namespace std;
int main()
{
  int n,max=0,a[1001];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(max<j-i+(abs)(a[i]-a[j]))
        max=j-i+(abs)(a[i]-a[j]);
    }
  }
  cout<<max;
  return 0;
}
