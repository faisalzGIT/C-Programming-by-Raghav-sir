#include<stdio.h>
int main(){
    int n,i,j,k,limt=1,m;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        m='A';
        for(j=1;j<=n-i;j++){
            printf(" ");
        }

        for(k=1;k<=limt;k++){
            printf("%c",m);
            m++;
        }
        limt+=2;
        printf("\n");
    }
}
