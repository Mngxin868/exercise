#include <iostream>
using namespace std;
int main()
{
  char ch;
  int size,a=1189,b=841,temp;
  cin>>ch>>size;
  for(int i=0;i<size;i++){
    temp=a/=2;
    a=b;
    b=temp;
  }
  cout<<a<<endl;
  cout<<b;
  return 0;
}
