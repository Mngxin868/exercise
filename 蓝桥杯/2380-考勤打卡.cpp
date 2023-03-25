#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
  int n,a[10001];
  string str;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>str>>a[i];
  }
  sort(a,a+n);
  cout<<a[0]<<endl;
  for(int i=1;i<n;i++){
    if(a[i]!=a[i-1])
      cout<<a[i]<<endl;
  }
  return 0;
}

//采用map
#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
  int n,a;
  map<int,int> mymap;
  string str;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>str>>a;
    if(mymap.find(a)==mymap.end())
      mymap.insert({a,1});
  }
  for(auto it=mymap.begin();it!=mymap.end();it++){
    cout<<it->first<<endl;
  }
  return 0;
}
