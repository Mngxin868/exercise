#include <iostream>
using namespace std;

bool check(int num){
  while(num>0){
    if(num%2==0) return false;
    num/=10;
  }
  return true;
}

int main()
{
  int ans=2019;
  for(int i=2;;i++){
    ans+=2019;
    if(check(ans)){
      cout<<ans;
      break;
    }
  }
  return 0;
}
