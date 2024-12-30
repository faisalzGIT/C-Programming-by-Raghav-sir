#include<stdio.h>

int factorial(int n){
    if(n==1 || n==0) return 1;
    int fac_ans = n * factorial(n-1);
    return fac_ans;
}

int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);

    int facto = factorial(n);
    printf("%d",facto);

    return 0;
}
