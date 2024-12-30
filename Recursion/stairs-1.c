#include<stdio.h>

int stair(int n){
    if(n<=2) return n;
    int t_ways = stair(n-1) + stair(n-2);
    return t_ways;
}

int main(){
    int n;
    printf("Enter anumber:");
    scanf("%d",&n);

    int ways = stair(n);
    printf("Ways t climb %dth stair are %d",n,ways);
    return 0;
}