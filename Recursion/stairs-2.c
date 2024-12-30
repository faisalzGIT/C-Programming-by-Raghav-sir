#include<stdio.h>

int stair(int n){
    if(n<0) return 0;
    else if(n==0) return 1;
    else{
        int t_ways = stair(n-1) + stair(n-2) + stair(n-3);
        return t_ways;
    }
}

int main(){
    int n;
    printf("Enter anumber:");
    scanf("%d",&n);

    int ways = stair(n);
    printf("Ways t climb %dth stair are %d",n,ways);
    return 0;
}