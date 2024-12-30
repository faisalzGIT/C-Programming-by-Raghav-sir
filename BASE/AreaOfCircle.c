//Find Area of Circle
#include<stdio.h>
#define PI 3.14159
int main(){
    float area,r;
    printf("Enter Radius:");
    scanf("%f",&r);
    area = PI*r*r;
    printf("Area of Circle = %f",area);
    return 0;
}