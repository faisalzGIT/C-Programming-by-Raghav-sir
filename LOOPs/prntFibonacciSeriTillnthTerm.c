#include<stdio.h>
void main(){
    int n,a=0,b=1,i,sum=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",a);
        sum=a+b;
        a=b;
        b=sum;
    }
}