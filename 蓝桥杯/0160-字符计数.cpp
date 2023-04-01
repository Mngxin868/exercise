#include <iostream>
#include <string>
using namespace std;
int main()
{
  string str;
  cin>>str;
  int ans=0;
  for(int i=0;i<str.size();i++){
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
      ans++;
  }
  cout<<ans<<endl<<str.size()-ans;
  return 0;
}
