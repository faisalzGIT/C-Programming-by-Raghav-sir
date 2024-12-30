#include<stdio.h>
int main(){
    int m,n,i,j;
    printf("Enter no.of Rows:");
    scanf("%d",&m);
    printf("Enter no.of Columns:");
    scanf("%d",&n);
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            if(i==1 || j==1 || i==m || j==n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}