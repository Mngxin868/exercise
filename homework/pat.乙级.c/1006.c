#include<stdio.h>
int main(){
    int num,digit_num[3],i;
    scanf("%d",&num);
    for(i=0;i<3;i++){
        digit_num[i]=num%10;
        num=num/10;
    }
    for(i=0;i<digit_num[2];i++)
        printf("B");
    for(i=0;i<digit_num[1];i++)
        printf("S");
    for(i=0;i<digit_num[0];i++)
        printf("%d",i+1);
    return 0;
}
