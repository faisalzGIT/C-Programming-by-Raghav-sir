// sum of 1 to n 
#include<stdio.h>

int sum(int n){
    if(n==1 || n==0) return 1;
    int sum_ans = n+sum(n-1);
    return sum_ans;
}

int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);

    printf("%d",sum(n));

    return 0;
}
