#include <iostream>
using namespace std;

int gcd(int a,int b){   //辗转相除法求最大公约数
    if(b == 0)
        return a;
    return gcd(b,a%b);
}

int find(int a,int b){  //最大公倍数
  return a*b/gcd(a,b);
}

int main()
{
  int a[2022],temp;
  a[1]=0;
  for(int i=2;i<2022;i++){
    //a[i]表示从1到i点的路径长度
    a[i]=10e8;  //先置为最大，方便后续比较
  }
  for(int i=1;i<2022;i++){
    for(int j=1;j<=21;j++){  //在每一个位置，为后面21个位置求到1的最短路径，超过21的点表示为无穷远
      temp=find(i,i+j);      //从第i个位置到第i+j位置的距离
      if(temp+a[i]<a[i+j]) a[i+j]=temp+a[i];  //看看途径i点会不会距离变短
    }
  }
  cout<<a[2021];
  return 0;
}
