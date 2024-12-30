#include<stdio.h>
int main(){
    int n,ld,sum=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    while(n>0){
        ld = n % 10;
        sum = sum + ld;
        n = n / 10;
    }
    printf("%d is the sum of the All digits of the given number",sum);
    return 0;
}