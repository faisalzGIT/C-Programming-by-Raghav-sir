#include<stdio.h>
int add(int x,int y){
    return x+y;
}
int main(){
    int a,b,sum;
    printf("Enter a & b:");
    scanf("%d%d",&a,&b);
    sum = add(a,b);
    printf("%d",sum);
    return 0;
}>