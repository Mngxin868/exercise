//题目问题，012这种也算，仅计算顺序的，逆序不算
#include <iostream>
using namespace std;

bool check(int num){
  int a,b,c,d;
  d=num%10;num/=10;
  c=num%10;num/=10;
  b=num%10;num/=10;
  a=num%10;
  if(a+1==b&&b+1==c) return true;
  if(b+1==c&&c+1==d) return true;
  return false;
}

int main()
{
  int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
  int ans=0;
  for(int i=1;i<13;i++){
    for(int j=1;j<=days[i];j++){
      int temp=i*100+j;
      ans+=check(temp);
      //if(check(temp)) cout<<temp<<endl;
    }
  }
  cout<<ans;
  return 0;
}
