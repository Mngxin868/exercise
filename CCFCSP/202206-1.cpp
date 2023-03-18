#include<iostream>
#include<cmath>
using namespace std;

double a[1001];

int main(){
	int n;
	double p=0,D=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		p+=a[i];
	}
	p/=n;
	for(int i=0;i<n;i++){
		D+=(a[i]-p)*(a[i]-p);
	}
	D/=n;
	for(int i=0;i<n;i++){
		printf("%lf\n",(a[i]-p)/sqrt(D));
	}
	return 0;
}
