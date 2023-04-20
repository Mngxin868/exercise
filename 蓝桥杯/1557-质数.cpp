#include <iostream>
using namespace std;

bool check(int num){
  for(int j=2;j*j<=num;j++){
    if(num%j==0) return false;
  }
  return true;
}

int main()
{
  int n,ans=0;
  cin>>n;
  for(int i=1;i<n;i++){
    if(i==1) continue;
    if(i==2){
      cout<<i;
      ans++;
    }
    else{
      if(check(i)){
        cout<<" "<<i;
        ans++;
      }
    }
  }
  cout<<endl<<ans;
  return 0;
}
