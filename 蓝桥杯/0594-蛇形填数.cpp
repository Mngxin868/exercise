#include <iostream>
using namespace std;
int main()
{
  int ans=0,temp=1;
  for(int i=1;i<39;i++){  //找规律，i对应每一斜行
    ans+=temp;
    temp++;
  }
  ans+=temp/2+1;
  cout<<ans;
  return 0;
}
