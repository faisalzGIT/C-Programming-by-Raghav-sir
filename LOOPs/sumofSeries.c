//print sum = 1 - 2 + 3 - 4 + 5 .....n 
#include<stdio.h>
int main(){
    int sum=0,i,n;
    printf("Enter a Number:");
    scanf("%d,",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            sum=sum-i;
        }
        else{
            sum=sum+i;
        }
    }
    printf("sum of all numbers till n is %d",sum);
    return 0;
}