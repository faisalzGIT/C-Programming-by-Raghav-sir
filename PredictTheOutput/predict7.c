#include<stdio.h>
int main(){
    int x=4, y=0, z;
    while (x>=0){
        x--;  
        y++; 
        if(x==y)
            continue;
        else
            printf("\n%d %d",x,y);
    }
    return 0;   
}




























// x = 3 , 2 , 1 , 0 , -1
// y = 1 , 2 , 3 , 4 , 5

//printed:
// 3 1
// 1 3
// 0 4
//-1 5