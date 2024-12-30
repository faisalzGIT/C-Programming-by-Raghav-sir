//WAP to to calculate sum of digits of the given number
#include<stdio.h>
int main(){
    int n,sum=0,lastdigit;
    printf("Enter a Number:");
    scanf("%d",&n);
    while (n>0)
    {
        lastdigit=n%10;//whenever a number's modulo by 10 then the answer is the last digit of that number
        sum=sum+lastdigit;
        n=n/10;
    }
    printf("Sum of the digits of the given number is %d",sum);
    return 0;
}