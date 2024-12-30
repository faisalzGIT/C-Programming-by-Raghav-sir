// Make a function which calculates 'a' raised to the power 'b' using recursion (Logarithmic approach)
#include<stdio.h>
int powLog(int a, int b){
    if(b==0) return 1;
    int v = powLog(a,b/2);
    if(b%2==0) return v*v;
    else return v*v*a;
}

int main(){
    int a;
    printf("Enter base:");
    scanf("%d",&a);
    int b;
    printf("Enter power:");
    scanf("%d",&b);

    int p = powLog(a,b);
    printf("%d raised to the power %d is %d",a,b,p);
    return 0;
}