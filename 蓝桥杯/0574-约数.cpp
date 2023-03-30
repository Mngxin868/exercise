#include <iostream>
using namespace std;
int main()
{
  int ans=0;
  for(int i=1;i*i<=2020;i++){
    if(2020%i==0) ans+=2;
  }
  cout<<ans;
  return 0;
}
