#include<stdio.h>
    int main(){
        int x=4, y=0, z;
        while (x>=0){
            if(x==y)
                break; // this terminates the whole loop
            else
                printf("\n%d %d",x,y);
                x--;
                y++;
        }
        return 0;
    }
/*
change in Values:
x   y
4   0
3   1
2   2
now break!

printf:

4 0
3 1
Now break!






















*/