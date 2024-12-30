#include<stdio.h>
void main(){
    int n,i,j,k,l,q,nsp,nst;
    printf("Enter :");
    scanf("%d",&n);
    nsp=1;
    nst=n;
    q=65;
    for(i=1;i<=2*n+1;i++){
        printf("%c",q);
        q++;
    }
    printf("\n");
    for(i=1;i<=n;i++){
        q=65;
        for(j=1;j<=nst;j++){
            printf("%c",q);
            q++;
        }
        for(k=1;k<=nsp;k++){
            printf(" ");
            q++;
        }
        for(l=1;l<=nst;l++){
            printf("%c",q);
            q++;
        }
        printf("\n");
        nsp+=2;
        nst--;
    }
}