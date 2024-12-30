/*Que1: 
    Two Numbers are entered through the keyboard. Write a Program to find the value of one number raised to the power of another
*/
#include<stdio.h>
int main(){
    int a,b,power=1,i;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    for(i=1;i<=b;i++){
        power=power*a;
    }
    printf("%d",power);
    return 0;
}