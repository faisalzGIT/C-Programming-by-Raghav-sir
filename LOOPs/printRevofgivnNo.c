//WAP to print the reverse oa a given number 
#include<stdio.h>
int main(){
    int n,ld,rev=0;
    
    printf("Enter a Number:");
    scanf("%d",&n);
    while(n>0){
        ld=n%10;
        rev=rev+ld; 
        
        n/=10;//since this is equal to n=n/10;
        rev*=10;//since this is equal to rev=rev*10;
    }
    rev/=10;
    printf("The reverse of the given number is %d",rev);
    return 0;
}