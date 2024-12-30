// take input 3 numbers and print the greatest of them
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three numbers by giving space:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){//b is out of race
        if(a>c){//since a>b therefore a>b&c
            printf("%d is the Greatest",a);
        }
        else{//since a>b therefore c>a>b
            printf("%d is the greatest",c);
        }
    }
    else{//a is out of race
        if(b>c){//since b>a therefore b>c&a
            printf("%d is the greatest",b);
        }
        else{//c>b an a is alredy lesser than b therefore: c>b>a
            printf("%d is the Greatest",c);
        }
    }
    return 0;
}