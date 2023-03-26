#include <iostream>
using namespace std;
int main()
{
  int a=1,b=3,c;
  double temp;
  while(1){
    temp=a*1000000.0/b+0.5;
    //cout<<temp<<endl;
    c=temp;
    if(c==618034) break;
    c=a+b;
    a=b;
    b=c;
  }
  cout<<a<<"/"<<b;
  return 0;
}
