#include <iostream>
#include <string>
using namespace std;
int main()
{
  int m,d;
  string str[]={"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
  cin>>m>>d;
  cout<<str[m-1];
  printf("%02d", d);
  return 0;
}
