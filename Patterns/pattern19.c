#include<stdio.h>
int main(){
    int n,i,j,k,a;
    printf("Enter a Number:");
    scanf("%d",&n);
    a=n-1;
    for(i=1;i<=n;i++){
        for(k=a;k>=1;k--){
            printf(" ");
        }
        a--;
        for(j=1;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}