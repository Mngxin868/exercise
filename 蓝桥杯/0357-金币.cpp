#include <iostream>
using namespace std;
int main()
{
  int ans=0,n,day=0;
  cin>>n;
  for(int i=1;;i++){
    for(int j=0;j<i;j++){
      ans+=i;
      day++;
      if(n==day){
        cout<<ans;
        return 0;
      }
    }
  }
  return 0;
}
