#include<stdio.h>
int main(){
    int n,i,j,k,nsp,nst,midline;//nsp - no.of Stars && nst - no.of spaces
    printf("Enter a Number:");
    scanf("%d",&n);
    nsp=n/2;
    nst=1;
    midline=(n/2)+1;
    for(i=1;i<=n;i++){
        for(j=1;j<=nsp;j++){
            printf(" ");
        }  
        for(k=1;k<=nst;k++){
            printf("*");
        }
        if(i<midline){
            nsp--;
            nst+=2;      
        } 
        else{
            nsp++;
            nst-=2;
        }
        printf("\n");
    }
    return 0;
}