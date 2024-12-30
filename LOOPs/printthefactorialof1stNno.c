// Print the factorial of first n numbers
#include<stdio.h>
int main(){
    int i,n,product=1;
    printf("Enter a NUmber:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        product=product*i;
        printf("The Factorial of %d is %d\n",i,product);
    }
    return 0;
}