#include<stdio.h>
int main(){
    int n,i;
    char j;
    char m;
    printf("Enter a Number:");
    scanf("%d",&n);
    // for(i=1;i<=n;i++){
    //     for(j='A';j<='A'+n-1;j++){
    //         printf("%c",j);
    //     }
    //     printf("\n");
    // }

    // Method - 2
    for(i=1;i<=n;i++){
        m = 'A';
        for(j=1;j<=n;j++){
            printf("%c",m);
            m++;
        }
        printf("\n");
    }
    return 0;
}