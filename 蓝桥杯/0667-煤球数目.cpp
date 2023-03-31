#include <iostream>
using namespace std;
int main()
{
  int ans=0,temp=1;
  for(int i=1;i<=100;i++){
    ans+=temp;
    temp+=(i+1);
  }
  cout<<ans;
  return 0;
}
