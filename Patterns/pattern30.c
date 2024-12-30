#include<stdio.h>
void main(){
    int n,i,j,k,l,m,q,nsp,nst;
    printf("Enter:");
    scanf("%d",&n);
    nsp=1;
    nst=n;
    for(i=1;i<=(2*n)+1;i++){
        printf("%d",i);
    }
    printf("\n");
    for(i=1;i<=n;i++){
        q=1;
        for(j=1;j<=nst;j++){
            printf("%d",q);
            q++;
        }
        for(k=1;k<=nsp;k++){
            printf(" ");
            q++;
        }
        for(l=1;l<=nst;l++){
            printf("%d",q);
            q++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
}
