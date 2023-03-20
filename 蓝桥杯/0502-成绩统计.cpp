#include <iostream>
using namespace std;
int main()
{
  int num,pass=0,good=0,temp;
  cin>>num;
  for(int i=0;i<num;i++){
    cin>>temp;
    if(temp>=60) pass++;
    if(temp>=85) good++;
  }
  //注意下面的四舍五入
  int ans=pass*100.0/num*1.0+0.5;
  cout<<ans<<"%"<<endl;
  ans=good*100.0/num*1.0+0.5;
  cout<<ans<<"%";
  return 0;
}
