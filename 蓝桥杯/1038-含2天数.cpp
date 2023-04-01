#include <iostream>
using namespace std;

int days[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isleap(int year){
  if(year%400==0||(year%4==0&&year%100!=0))
    return true;
  return false;
}

bool check(int num){
  while(num>0){
    if(num%10==2) return true;
    num/=10;
  }
  return false;
}

int main()
{
  int ans=0;
  for(int i=1900;i<10000;i++){
    if(isleap(i)) ans++;  //闰年2月一定会加入
    if(check(i)){   //年份中含2则无需遍历
      ans+=365;
      continue;
    }
    for(int j=0;j<12;j++){
      if(check(j+1)){
        ans+=days[j]; //月份中含2也无需遍历
        continue;
      }
      for(int k=0;k<days[j];k++){
        if(check(k+1)) ans++;
      }
    }
  }
  cout<<ans;
  return 0;
}
