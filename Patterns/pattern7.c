#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        k=1;
        for(j=1;j<=i;j++){
            printf("%d ",k);
            k=k+2;
        }
        printf("\n");
    }
    //Another way of doing it is By Using AP Formula 2n-1
    return 0;
}