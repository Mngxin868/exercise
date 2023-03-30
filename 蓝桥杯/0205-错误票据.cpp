#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
  vector<int> ID;
  int N,temp,n,m;
  cin>>N;
  while(cin>>temp){
    ID.push_back(temp);
  }
  sort(ID.begin(),ID.end());
  for(int i=0;i<ID.size()-1;i++){
    if(ID[i]==ID[i+1]) n=ID[i];
    if(ID[i]+2==ID[i+1]) m=ID[i]+1;
  }
  cout<<m<<" "<<n;
  return 0;
}
