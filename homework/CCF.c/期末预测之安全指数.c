#include<stdio.h>
#define N 100000

int max(int a,int b){
	if(a>b) return(a);
	else return(b);
}

int main(){
	int n,i,w[N],score[N],y=0;
	scanf("%d",&n);
	while(n<2||n>100000){
		scanf("%d",&n);
	}
	getchar();
	for(i=0;i<n;i++){
		scanf("%d",&w[i]);
		scanf("%d",&score[i]);
		getchar();
	}
	for(i=0;i<n;i++){
		y=w[i]*score[i]+y;
	}
	y=max(0,y);
	printf("%d",y);
	return 0;
} 
