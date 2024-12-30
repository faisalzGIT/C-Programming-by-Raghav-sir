#include<stdio.h>
int main(){
    int n,i,j,k,nsp,nst;
    printf("Enter:");
    scanf("%d",&n);
    nsp=0;
    nst=n;
    for(i=1;i<=n;i++){
        for(j=1;j<=nsp;j++){
            printf(" ");
        }
        for(k=1;k<=nst;k++){
            printf("*");
        }
        nsp++;
        nst--;
        printf("\n");
    }
}