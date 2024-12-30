// WAP to count how many digits does the number input Contains
#include<stdio.h>
int main(){
    long int n,count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0){
        n=n/10;//a number's last digit gets removed... everytime we divide it
        count++;
    }
    printf("No. of digits in this Number is %d",count);
    return 0;

}