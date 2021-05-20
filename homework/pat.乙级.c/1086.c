#include<stdio.h>
int main(){
	int i,A,B,C;
	scanf("%d %d",&A,&B);
	C=A*B;
	for(i=0;C%10==0;i++)
		C=C/10;
	while(C>0){
		printf("%d",C%10);
		C=C/10;
	}
	return 0;
}
