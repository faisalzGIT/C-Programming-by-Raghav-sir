#include<stdio.h>
int main(){
    int i,n,a=3;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d\n",a);
        a=a*4;
    }
    return 0;
}