#include <iostream>
using namespace std;

bool check(int num){
  while(num>0){
    if(num%10==2||num%10==4) return true;
    num/=10;
  }
  return false;
}

int main()
{
  int ans=0;
  //考虑到数各不相同，则i<j<k且i+j+k=2019
  for(int i=1;3*i<2019;i++){  //显然3*i<2019
    if(check(i)) continue;    //存在包含2/4的数直接剪枝
    for(int j=i+1;i+2*j<2019;j++){ //2*j<2019-i
      if(check(j)) continue;  //剪枝
      for(int k=j+1;k<2019;k++){
        if(check(k)) continue;
        if(i+j+k==2019) ans++;
      }
    }
  }
  cout<<ans;
  return 0;
}
