#include <iostream>
using namespace std;

int a[1001];

int main()
{
  int n,max=0;
  cin>>n;
  cin>>a[0];
  for(int i=1;i<n;i++){
    cin>>a[i];
    if(max<a[i]-a[i-1]){
      max=a[i]-a[i-1];
    }
  }
  cout<<max;
  return 0;
}
