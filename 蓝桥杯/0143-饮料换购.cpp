#include <iostream>
using namespace std;
int main()
{
  int n,sum=0,temp=0;
  cin>>n;
  while(n>0){
    sum+=n;   //喝了n瓶
    temp+=n;  //得到n个瓶盖
    n=temp/3; //换了多少瓶
    temp=temp%3; //还剩多少个瓶盖
  }
  cout<<sum;
  return 0;
}
