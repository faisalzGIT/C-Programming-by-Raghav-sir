//take Input age of ram(a) shyam(b) and baburao(c) and determine which of them is the youngest
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter age of r,s,b");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b){
        if(a<c){
            printf("%d ram is the youngest",a);
        }
        else{//if true then c<a<b
            printf("%d baburao is the youngest",c);
        }
    }
    else{// b<a
        if(b<c){
            printf("%d shyam is the youngest",b);
        }
        else{// if true then c<b<a
            printf("%d baburao is the youngest",c);
        }
    }
    return 0;
}