#include <iostream>
using namespace std;

int a[2021]={0};
int b[2021]={0};

bool check(int num){
  for(int i=3;i*i<=num;i++)
    if(num%i==0) return true;
  return false;
}

int main()
{
  int ans=1010-1; //计算所有的偶数,记得减去2
  for(int i=1;i<2020;i+=2){
    if(check(i)) ans++;
  }
  cout<<ans;
  return 0;
}
