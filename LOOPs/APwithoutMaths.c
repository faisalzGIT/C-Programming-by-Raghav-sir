#include<stdio.h>
int main(){
    int n,i,a;// n is number of APs
    printf("Enter a Number:");
    scanf("%d",&n);
    a = 1;//a is starting point 
    for(i=1;i<=n;i++){
        printf("%d ",a);
        a = a + 2;// here +3 is difference
    }
    return 0;
}