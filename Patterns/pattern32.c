#include<stdio.h>
int main(){
    int n,v,i,j,k,l,m,a,b;
    printf("Enter:");
    scanf("%d",&n);
    a=1;
    b=n;
    m=1;
    for(v=1;v<=2*n+1;v++){
        printf("%d",a);
        if(v<(n+1)){
            a++;
        }
        else{
            a--;
        }
    }
    printf("\n");
    for(i=1;i<=n;i++){
        a=1;
        for(j=1;j<=b;j++){
            printf("%d",j);
        }
        for(k=1;k<=m;k++){
            printf(" ");
        }
        for(l=b;l>=1;l--){
            printf("%d",l);
        }
        printf("\n");
        b--;
        m+=2;
    }

    return 0;
}