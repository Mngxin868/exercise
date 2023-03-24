#include <iostream>
#include <string>
using namespace std;
int main()
{
  string str1[10]={"jia","yi","bing","ding","wu","ji","geng","xin","ren","gui"};
  string str2[12]={"zi","chou","yin","mao","chen","si","wu","wei","shen","you","xu","hai"};
  int year,ans1=6,ans2=8;
  cin>>year;
  year=year%60;
  for(int i=0;i<60;i++){
    if(year==i){
      cout<<str1[ans1]<<str2[ans2];
      break;
    }
    ans1=(ans1+1)%10;
    ans2=(ans2+1)%12;
  }
  return 0;
}
