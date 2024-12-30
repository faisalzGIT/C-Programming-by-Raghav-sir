//Given a point (x,y), WAP to find out if it lies on the x-axis, y-axis or at the origin, viz.(0,0).
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter x-coordinate:");
    scanf("%d",&x);
    printf("Enter y-coordinate:");
    scanf("%d",&y);
    
    if(x==0 && y==0){
        printf("Point is origin");
    }
    else if(x==0){
        printf("point lies on y-axis");
    }
    else if(y==0){
        printf("Point lies on x-axis");
    }
    else{
        printf("Point does not lie on x-axis or y-axis");
    }
    /*if(x>=1 && y==0){
        printf("Point lies on x-axis");
    }
    else if(x==0 && y>=1){
        printf("Point lies on y-axis");
    }
    else if(x==0 && y==0){ 
        printf("The Point is Origin");
    }
    else{
        printf("The point does not lie on x-axis or y-axis");
    }*/
    return 0;
}