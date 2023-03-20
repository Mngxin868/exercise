#include <iostream>
using namespace std;
int main()
{
  int num=0;
  for(int i=1;i<2021;i++){
    if(i%10==2) num++;
    if((i%100)/10==2) num++;
    if((i%1000)/100==2) num++;
    if(i/1000==2) num++;
  }
  cout<<num;
  return 0;
}
