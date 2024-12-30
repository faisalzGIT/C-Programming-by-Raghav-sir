// Make a function which calculates 'a' raised to the power 'b' using recursion
#include<stdio.h>
int expo(int a, int b){
    if(b==0) return 1;
    return a * expo(a,b-1); 
}

int main(){
    int a;
    printf("Enter base:");
    scanf("%d",&a);
    int b;
    printf("Enter power:");
    scanf("%d",&b);

    int p = expo(a,b);
    printf("%d raised to the power %d is %d",a,b,p);
    return 0;
}