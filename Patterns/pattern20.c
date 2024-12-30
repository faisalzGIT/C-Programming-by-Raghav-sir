#include<stdio.h>
int main(){
    int n,i,j;
    char k;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        k = 'A';
        for(j=1;j<=n;j++){
            if((i+j)<=n){
                printf(" ");
            }
            else{
                printf("%c",k++);//Means: k = k + 1;
            }
        }
        printf("\n");
    }
    return 0;
}