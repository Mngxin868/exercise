#include <iostream>
using namespace std;

bool check(int num){
  for(int j=3;j*j<=num;j++){
    if(num%j==0) return false;
  }
  return true;
}

int main()
{
  int num=1;  //已计算2
  for(int i=3;;i++){
    if(i%2==0) continue;
    if(check(i)) num++;
    if(num==100002){
      cout<<i;
      return 0;
    }
  }
  return 0;
}
