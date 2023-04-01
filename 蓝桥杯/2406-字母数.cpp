#include <iostream>
using namespace std;

bool check(int num){
  while(num>0){
    if(num%16<10) return false;
    num/=16;
  }
  return true;
}

int main()
{
  for(int i=2023;i<4096;i++){
    if(check(i)){
      cout<<i;
      return 0;
    }
  }
  return 0;
}
