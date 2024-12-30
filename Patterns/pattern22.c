#include<stdio.h>
int main(){
    int n,i,j,k,limt=1;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=limt;k++){
            printf("%d",k);
        }
        limt+=2;
        printf("\n");
    }
}