#include<stdio.h>
int factorial(int until){
    int fact = 1;
    for(int k=2;k<=until;k++){
        fact=fact*k;
    }
    return fact;
}

int combination(int n, int r){
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
}

int main(){
    int m,i,j,l,a=0;
    printf("Enter:");
    scanf("%d",&m);
    for(i=0;i<=m;i++){
        for(l=m-i;l>=1;l--){
            printf("   ");
        }
        for(j=0;j<=i;j++){
            printf("%d    ",combination(i,j));
        }
        printf("\n");
    }
    return 0;
}