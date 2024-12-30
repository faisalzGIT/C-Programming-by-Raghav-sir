//WAP to display GP 1,2,4,8,16,32....n no. of GP

#include<stdio.h>
int main(){
    int a=1,i,n;
    printf("Enter a Number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("%d ",a);
        a = a * 2;
    }
    
    
    return 0;

}