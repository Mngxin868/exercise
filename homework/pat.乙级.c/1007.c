#include<stdio.h>

int check(int num){
    int i;
    for(i=3;i*i<=num;i++)
        if(num%i==0)
            return 0;
    return 1;
}

int main(){
    int N,i,count=0;
    scanf("%d",&N);
    for(i=5;i<=N;i+=2){
        if(check(i-2)&&check(i))
            count++;
    }
    printf("%d",count);
    return 0;
}
