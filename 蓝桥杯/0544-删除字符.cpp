#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str;
  cin>>str;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=1;j<str.size()-i;j++){
      if(str[j]<str[j-1]){
        for(int k=j;k<str.size();k++){
          str[k-1]=str[k];
        }
        break;
      }
    }
  }
  for(int k=0;k<str.size()-n;k++){
    cout<<str[k];
  }
  return 0;
}
