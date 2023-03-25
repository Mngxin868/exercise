//类似于辗转相除法
#include <iostream>
using namespace std;
int main()
{
  int ans=0,a=2019,b=324,temp;
  while(a!=b){
    a=a-b;
    ans++;
    if(a<b){
      temp=a;
      a=b;
      b=temp;
    }
  }
  cout<<ans+1;
  return 0;
}
