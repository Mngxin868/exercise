#include <iostream>
using namespace std;
int main()
{
  int days[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int m;
  cin>>m;
  cout<<days[m-1];
  return 0;
}
