//Print the nth Fibonacci Number
// refer to (3:31:47) for Explaination video no.3
#include<stdio.h>
int main(){
    int i,n,a=1,b=1,sum=1;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=(n-2);i++){
        sum=a+b;
        a=b;
        b=sum;
        printf("%d",sum);
    }
    printf("%dth fibonacci number is %d",n,sum);
    return 0;
}