#include <iostream>
#include <cstring>
using namespace std;
int main()
{
  int arr[200]={0};
  int max=0,p=0;
  char ch;
  string str;
  cin>>str;
  for(int i=0;i<str.size();i++){
    arr[str[i]-'0']++;
  }
  for(int i=0;i<200;i++){
    if(max<arr[i]){
      max=arr[i];
      p=i;
    }
  }
  ch=p+'0';
  cout<<ch<<endl<<max;
  return 0;
}
