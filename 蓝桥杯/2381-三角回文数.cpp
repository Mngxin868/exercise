#include <iostream>
using namespace std;

bool check(int num){
  int rev=0,temp=num;
  while(temp>0){
    rev=rev*10+temp%10;
    temp/=10;
  }
  if(num==rev) return true;
  return false;
}

int main()
{
  int ans=0;
  for(int i=1;;i++){
    ans+=i;
    if(ans<=20220514) continue;
    if(check(ans)){
      cout<<ans;
      break;
    }
  }
  return 0;
}
