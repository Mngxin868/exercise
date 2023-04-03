#include <iostream>
using namespace std;

bool isleap(int year){
  if(year%400==0||(year%4==0&&year%100!=0))
    return true;
  return false;
}

int check(int num){
  if(num<=0) return 0;
  return num%10+check(num/10);
}

int main()
{
  int days[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int ans=0;
  
  for(int i=1900;i<10000;i++){
    days[1]+=isleap(i);
    for(int j=1;j<13;j++){
      for(int k=1;k<=days[j-1];k++){
        if(check(i)==check(j)+check(k)) ans++;
      }
    }
    days[1]-=isleap(i);
  }

  cout<<ans;
  return 0;
}
