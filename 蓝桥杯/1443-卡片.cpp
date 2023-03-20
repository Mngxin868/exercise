#include <iostream>
using namespace std;
int main()
{
  int arr[10];
  for(int i=0;i<10;i++){
    arr[i]=2021;
  }
  int num=1,temp;
  for(;;num++){
    temp=num;
    while(temp>0){
      arr[temp%10]--;
      if(arr[temp%10]<0){ //注意这里是不能完成第num个数的
        cout<<num-1;
        return 0;
      }
      temp/=10;
    }
  }
  return 0;
}
