#include<stdio.h>
int main(){
    int n,i;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(int i=1;i<=n;i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;

}