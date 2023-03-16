#include<iostream>
using namespace std;

int main(){
	int n,m,a[21],b[21],c[21];
	cin>>n>>m;
	c[0]=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		c[i]=c[i-1]*a[i];
		cout<<(m%c[i])/c[i-1]<<" ";
		m-=(m%c[i]); 
	}
	return 0;
}
