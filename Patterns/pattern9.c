#include<stdio.h>
int main(){
    int n,i;
    char j;
    char m;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        m = 'A';
        for(j=1;j<=i;j++){
            printf("%c",m);
            m++;
        }
        printf("\n");
    }
    return 0;
}