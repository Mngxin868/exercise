#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

double a[500001];

int main()
{
  int n;
  double S,avg,ans=0;
  cin>>n>>S;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a,a+n);
  avg=S*1.0/n;
  for(int i=0;i<n;i++){
    if(a[i]*(n-i)<S){   //第i位无法达到平均值则全付
      ans+=(a[i]-avg)*(a[i]-avg);
      S-=a[i];
    }
    else{     //重新计算当前的平均值，然后均分支付
      double temp=S*1.0/(n-i);
      ans+=(avg-temp)*(avg-temp)*(n-i);
      break;
    }
  }
  printf("%.4lf",sqrt(ans/n));
  return 0;
}
