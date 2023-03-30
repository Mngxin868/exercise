#include <iostream>
using namespace std;

bool check(int m, int d, int days[]){
  for(int i=1;i<13;i++){
    if(i==m&&d<=days[i-1]) return true;
  }
  return false;
}

int main()
{
  int days[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int m,d;
  cin>>m>>d;
  if(check(m,d,days))
    cout<<"yes";
  else
    cout<<"no";
  return 0;
}
