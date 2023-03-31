#include <iostream>
using namespace std;
int main()
{
  int ans=1;
  for(int i=1;i<=2021;i+=2){
    ans=(ans*i)%100000;
  }
  cout<<ans;
  return 0;
}
