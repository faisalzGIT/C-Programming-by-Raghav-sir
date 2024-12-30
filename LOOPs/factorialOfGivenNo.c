

//take factorial of a given number
#include<stdio.h>
int main(){
    int n,p=1,i;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        p=p*i;
    }
    printf("the Factorial of the given number is %d",p);
    return 0;
}