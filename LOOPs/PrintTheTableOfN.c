#include<stdio.h> 
int main(){
    int i,mult,n;
    printf("Enter a Number to Find its Table:");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        mult=n*i;
        printf("%d ",mult);
    }
    return 0;

}

/* Second Method:

#include<stdio.h>
int main(){
    int n,i,mult;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        mult=n*i;
        printf("%d * %d = %d\n",n,i,mult);
    }
    return 0;
}
*/