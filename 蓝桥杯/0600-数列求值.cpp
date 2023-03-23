#include <iostream>
using namespace std;
int main()
{
  int a=1,b=1,c=1,temp;
  for(int i=4;i<=20190324;i++){
    temp=(a+b+c)%10000;
    c=b;
    b=a;
    a=temp;
  }
  cout<<a;
  return 0;
}
