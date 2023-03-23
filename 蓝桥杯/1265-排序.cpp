#include <iostream>
#include <algorithm>
#define N 500010
using namespace std;
int main()
{
  int n,arr[N];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  sort(arr,arr+n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  for(int i=n-1;i>=0;i--){
    cout<<arr[i]<<" ";
  }
  return 0;
}
