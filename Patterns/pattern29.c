#include<stdio.h>
void main(){
    int n,i,j,k,l,m,nsp,nst;
    printf("Enter:");
    scanf("%d",&n);
    nsp=1;
    nst=n;
    for(i=1;i<=(2*n)+1;i++){
        printf("*");
    }
    printf("\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=nst;j++){
            printf("*");
        }
        for(k=1;k<=nsp;k++){
            printf(" ");            
        }
        for(l=1;l<=nst;l++){
            printf("*");            
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
}
