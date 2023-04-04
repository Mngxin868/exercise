//先找质数，再找纯质数，会超时
#include <iostream>
using namespace std;

bool check(int num){
  for(int i=3;i*i<=num;i++){
    if(num%i==0) return false;
  }
  return true;
}

bool checks(int num){
  while(num>0){
    if(num%10!=2 && num%10!=3 && num%10!=5 && num%10!=7)
      return false;
    num/=10;
  }
  return true;
}

int main()
{
  int ans=0;
  for(int i=2;i<=20210605;i++){
    if(i!=2&&i%2==0) continue;
    if(check(i)){
      if(checks(i)) ans++;
    }
  }
  cout<<ans;
  //cout<<1903;
  return 0;
}

//先求纯质数（较少），再判断是否为质数，不会超时
#include <iostream>
using namespace std;

int ans=0;

bool check(int num){
  for(int i=2;i*i<=num;i++){
    if(num%i==0) return false;
  }
  return true;
}

void dfs(int n){
  if(n>20210605) return;
  if(check(n)) ans++;
  n*=10;
  dfs(n+2);
  dfs(n+3);
  dfs(n+5);
  dfs(n+7);
}

int main()
{
  dfs(2);
  dfs(3);
  dfs(5);
  dfs(7);
  cout<<ans;
  return 0;
}

//不过是填空题，都能得到结果
