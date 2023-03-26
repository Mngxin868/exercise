#include <iostream>
#include <algorithm>
using namespace std;

int a[100001],b[100001],c[100001];

//lower_bound函数实现
int check_a(int a[],int num,int n){
  int left=0,right=n,mid;
  while(left<right){
    mid=(left+right)/2;
    if(a[mid]<num) left=mid+1;
    else right=mid;
  }
  return left;
}

//upper_bound函数实现
int check_c(int a[],int num,int n){
  int left=0,right=n,mid;
  while(left<right){
    mid=(left+right)/2;
    if(a[mid]<=num) left=mid+1;
    else right=mid;
  }
  return left;
}

int main()
{
  int n;
  long long ans=0;
  cin>>n;
  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<n;i++) cin>>b[i];
  for(int i=0;i<n;i++) cin>>c[i];
  sort(a,a+n);
  sort(b,b+n);
  sort(c,c+n);
  for(int i=0;i<n;i++){
    long long j=check_a(a,b[i],n);
    long long k=check_c(c,b[i],n);
    ans+=j*(n-k); 
  }
  cout<<ans;
  return 0;
}
