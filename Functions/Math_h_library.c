#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Enter a Number:");
    scanf("%d",&a);
    int root = sqrt(a);
    printf("Square root is %d\n",root);
    int power = pow(a,5);
    printf("Powered to 5 is: %d",power);
    return 0;
}