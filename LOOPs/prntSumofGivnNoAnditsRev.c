//print The sum of the given number and its reverse
#include<stdio.h>
int main(){
    int n,rev=0,sum=0,ld,temp;
    printf("Enter a Number:");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        ld=n%10;
        rev=ld+rev;
        sum=sum+ld;
        rev*=10;
        n/=10;
    }
    rev/=10;
    printf("The sum of the given number and its reverse is %d",temp+rev);
    return 0;
}