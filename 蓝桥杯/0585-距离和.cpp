#include <iostream>
#include <string>
using namespace std;
int main()
{
  string str="LANQIAO";
  int ans=0;
  for(int i=0;i<str.size();i++){
    for(int j=i+1;j<str.size();j++){
      ans+=(abs)(str[i]-str[j]);
    }
  }
  cout<<ans;
  return 0;
}
