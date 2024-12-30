#include<stdio.h>

int factorial(int until){
    int facto=1;
    for(int i=2;i<=until;i++){
        facto=facto*i;
    }
    return facto;
}

int permutation(int n, int r){
    int permu=factorial(n)/factorial(n-r);
    return permu;
}

int main(){
    int n,r;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter r:");
    scanf("%d",&r);

    int  PERmutation = permutation(n,r);
    printf("%d",PERmutation);

    return 0;
}