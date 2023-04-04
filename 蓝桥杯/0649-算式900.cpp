#include <iostream>
using namespace std;

bool check(int i, int j, int k){
  int a[11]={0};
  while(i>0){
    a[i%10]++;
    i/=10;
  }
  while(j>0){
    a[j%10]++;
    j/=10;
  }
  while(k>0){
    a[k%10]++;
    k/=10;
  }
  for(int i=0;i<10;i++){
    if(a[i]!=1) return false;
  }
  return true;
}

int main()
{
  for(int i=1000;i<10000;i++){
    if(i==5012) continue;       //排除已知解
    for(int j=1000;j<i;j++){    //要为正数i显然比j大
      if(i-j>90) continue;      //k最小为10
      for(int k=10;k<100;k++)
        if((i-j)*k==900){
          if(check(i,j,k)){
            cout<<"("<<i<<"-"<<j<<")"<<"*"<<k<<"=900";
          }
        }
    }
  }
  return 0;
}
