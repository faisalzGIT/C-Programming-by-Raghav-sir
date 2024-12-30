// odd no.s till Nth term
#include<stdio.h>
int main(){
    int i,n;
    printf("Enter a Number To Print AP till it:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            printf(" ");
        }
        else{
            printf("%d",i);
        }
    }
    return 0;
}