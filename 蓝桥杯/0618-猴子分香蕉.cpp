#include <iostream>
using namespace std;
int main()
{
  int ans=6,temp;  //至少为6
  while(1){
    temp=ans;
    if(temp%5==1){
      temp=(temp-1)/5*4;
      if(temp%5==2&&temp>6){
        temp=(temp-2)/5*4;
        if(temp%5==3&&temp>7){
          temp=(temp-3)/5*4;
          if(temp%5==4&&temp>8){
            temp=(temp-4)/5*4;
            if(temp%5==0&&temp!=0) break;
          }
        }
      }
    }
    ans+=5;
  }
  cout<<ans;
  return 0;
}
