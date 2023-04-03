#include <iostream>
#include <string>
using namespace std;
int main()
{
  int a[200]={0},max=0;
  string str;
  char ch;
  cin>>str;
  for(int i=0;i<str.size();i++){
    a[str[i]-'0']++;
  }
  for(int i='A'-'0';i<='Z'-'0';i++){
    if(max<a[i]) max=a[i];
  }
  for(int i='A'-'0';i<='Z'-'0';i++){
    if(a[i]==max){
      ch=i+'0';
      cout<<ch;
    }
  }
  return 0;
}
