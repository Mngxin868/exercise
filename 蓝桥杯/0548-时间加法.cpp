#include <iostream>
using namespace std;
int main()
{
  int a,b,t;
  cin>>a>>b>>t;
  t+=b;
  a+=(t/60);
  b=t%60;
  cout<<a<<endl<<b;
  return 0;
}
