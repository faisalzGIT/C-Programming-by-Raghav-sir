#include<stdio.h>
int main(){
    int x=4,y,z;
    y=--x;//shayad y==3
    z=x--;//shayad z==4
    printf("%d\n%d\n%d",x,y,z);
    return 0;
}