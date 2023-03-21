#include <iostream>
#include <algorithm>
using namespace std;
int A[100005];
int main()
{
  int n,min,temp,ans=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>A[i];
  }
  sort(A,A+n);
  min=A[1]-A[0];
  for(int i=2;i<n;i++){
    min=min>(A[i]-A[i-1])?(A[i]-A[i-1]):min;
  }
  if(min!=0)
    ans=(A[n-1]-A[0])/min+1;
  else ans=n;
  cout<<ans;
  return 0;
}
