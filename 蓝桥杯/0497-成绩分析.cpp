#include <iostream>
using namespace std;
int main()
{
  int max=0,min=100,temp,sum,n,avg;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>temp;
    if(max<temp) max=temp;
    if(min>temp) min=temp;
    sum+=temp;
  }
  avg=sum*100.0/n+0.5;
  cout<<max<<endl<<min<<endl;
  printf("%.2lf",avg/100.0);
  return 0;
}
