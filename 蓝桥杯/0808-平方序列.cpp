#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int x,y;
  for(int x=2020;;x++){
    int y=sqrt(2*x*x-2019*2019);
    if(y*y==2*x*x-2019*2019){
      cout<<x+y<<endl;
      return 0;
    }
  }
  return 0;
}
