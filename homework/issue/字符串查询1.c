#include<stdio.h>
#define N 100000
int main(){
	char s[10][N],ch;
	int i,j,t,count=0;
	scanf("%d",&t);
	ch=getchar();
	for(i=0;i<t;i++)
		for(j=0;j<N&&s[i][j-1]!='\n';j++)
			scanf("%c",&s[i][j]);
	for(i=0;i<t;i++){
		for(j=1;s[i][j]!='\n';j++)
			if(s[i][j-1]=='A'&&s[i][j]=='K')
				count++;
		printf("%d\n",count);
		count=0;
	}
	return 0;
} 
