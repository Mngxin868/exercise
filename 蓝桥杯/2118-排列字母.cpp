#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool cmp(char a,char b){
  return a<b;
}

int main()
{
  char str[28];
  for(int i=0;i<28;i++){
    cin>>str[i];
  }
  sort(str,str+28,cmp);
  for(int i=0;i<28;i++){
    cout<<str[i];
  }
  return 0;
}
