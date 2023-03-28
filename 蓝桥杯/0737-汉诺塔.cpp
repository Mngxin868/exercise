#include <iostream>
#include <cmath>
using namespace std;
 
unsigned long long ans=0;

//有x,y,z三个柱子,最终由x->z
void hanoi(int n){
  hanoi(n-1); //将n-1个盘从x->y
  ans++;      //将第n盘移入z
  hanoi(n-1); //将n-1个盘从y->z
}

//但这样显然超时
//进一步的，仅考虑步数即为: 2*n-1

int main()
{
  //hanoi(64);
  ans=pow(2,64)-1;
  cout<<ans;
  return 0;
}
