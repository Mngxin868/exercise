#include <iostream>
#include <string>
using namespace std;

int i=0;

int dfs(string str){
  int temp=0,t=0;
  while(i<str.size()){
    if(str[i]==')'){
      i++;
      break;
    }
    if(str[i]=='('){
      i++;
      temp+=dfs(str);
    }
    if(str[i]=='x'){
      i++;
      temp++;
    }
    if(str[i]=='|'){
      t = max(t,temp);
      temp = 0;
      i++;
    }
  }
  return max(t,temp);
}

int main()
{
  string str;
  cin>>str;
  cout<<dfs(str);
  return 0;
}
