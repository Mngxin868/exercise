#include <iostream>
#include <string>
using namespace std;
int main()
{
  string str,ans = "lanqiao";
  cin>>str;
  if(str.size()!=ans.size()){
    cout<<"no";
    return 0;
  }
  for(int i=0;i<str.size();i++){
    if(str[i]!=ans[i]&&str[i]!=ans[i]-32){
      cout<<"no";
      return 0;
    }
  }
  cout<<"yes";
  return 0;
}
