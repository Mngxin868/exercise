#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	double i,temp,sum=0; 
	scanf("%d %lf",&n,&i);
	for(int j=0;j<=n;j++){
		scanf("%lf",&temp);
		sum+=(temp*pow(1+i,-j));
	}
	printf("%.3lf",sum);
	return 0;
} 
