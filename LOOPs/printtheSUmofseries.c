//print the sum of series:
//1 - 2 + 3 - 4 + 5 - 6
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    if(n%2==0){
        sum=-n/2;
    }
    else{
        sum=-n/2+n;
    }
    printf("%d",sum);
    return 0;
}