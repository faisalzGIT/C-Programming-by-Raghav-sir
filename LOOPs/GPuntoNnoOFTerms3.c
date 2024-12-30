//WAP to Print GP-(100,50,25,12.5,...) upto n Terms
#include<stdio.h>
int main(){
    float a=100;
    int i,n;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%.2f\n ",a);
        a=a/2;
    }
    return 0;
}