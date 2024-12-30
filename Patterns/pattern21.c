#include<stdio.h>
int main(){
    /*🥇1st Method: Much Easier*/

    int n,i,j,k,limt=1;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n-i;j>=1;j--){
            printf(" ");
        }
        for(k=1;k<=limt;k++){
            printf("*");
        }
        limt+=2;
        printf("\n");
    }

    /*🥈2nd Method: little bit hard*/
    
    // int n,i,j,k;
    // printf("Enter a Number:");
    // scanf("%d",&n);
    // for(i=1;i<=n;i++){
    //     for(j=1;j<=n;j++){
    //         if(i+j<=n){
    //             printf(" ");
    //         }
    //         else{
    //             printf("*");
    //         }
    //     }
    //     if(i>1){
    //         for(k=1;k<=i-1;k++){
    //             printf("*");
    //         }
    //     }
    //     printf("\n");
    // }
    return 0;
}