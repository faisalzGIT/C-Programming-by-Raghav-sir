#include<stdio.h>
int main(){
    int n,i,j,t=1;
    printf("Enter Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",t);
            t++;
        }
        printf("\n");
    }
    return 0;
}