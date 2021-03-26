#include<stdio.h>
#include<string.h>

void lan_change(int digit){
	if(digit==0) printf("ling");
	if(digit==1) printf("yi");
	if(digit==2) printf("er");
	if(digit==3) printf("san");
	if(digit==4) printf("si");
	if(digit==5) printf("wu");
	if(digit==6) printf("liu");
	if(digit==7) printf("qi");
	if(digit==8) printf("ba");
	if(digit==9) printf("jiu");	
}

int main(){
	char arr[102]={0};
    int i,sum=0,num=0,count=0,digit[3];
    for(i=0;i<102;i++){
        scanf("%c",&arr[i]);
        if(arr[i]=='\n')
        	break;
    }
    for(i=0;i<strlen(arr)-1;i++){
        num=arr[i]-'0';
        sum=num+sum;
    }
    if(sum==0){
			digit[0]=0;
			count=1;
		}
	for(i=0;i<3;i++){
		if(sum>0){
			digit[i]=sum%10;
			sum=sum/10;
			count++;
		}
	}
	for(i=count-1;i>=0;i--){
		lan_change(digit[i]);
		if(i!=0)
			printf(" ");
	} 
   	return 0; 
}
