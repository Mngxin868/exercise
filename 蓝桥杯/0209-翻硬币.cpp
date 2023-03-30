#include <iostream>
#include <string>
using namespace std;

void step(string &str,int i){
  if(str[i]=='*') str[i]='o';
  else str[i]='*';
  if(str[i+1]=='*') str[i+1]='o';
  else str[i+1]='*';
}

int main()
{
  string str1,str2;
  cin>>str1>>str2;
  int ans=0;
  for(int i=0;i<str1.size()-1;i++){
    if(str1[i]!=str2[i]){
      step(str1,i);
      ans++;
    }
  }
  cout<<ans;
  return 0;
}
