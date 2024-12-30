#include<stdio.h>
int main(){
    int n,i,j,k,m,a;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            char ch = (char)(k+64);
            printf("%c",ch);
        } 
        a = i - 1;
        for(m=1;m<=i-1;m++){
            char ch = (char)(a+64);
            printf("%c",ch);
            a--;
        }        
        printf("\n");
    }
    return 0;
}