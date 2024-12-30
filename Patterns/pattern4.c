#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter a Number:");
    scanf("%d",&n);
    // for(i=1;i<=n;i++){
    //     for(j=1;j<=(n+1-i);j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    //Another Way to do same thing
    int a=n;
    for(i=1;i<=n;i++){
        for(j=1;j<=a;j++){
            printf("*");
        }
        a--;
        printf("\n");
    }
    return 0;
}