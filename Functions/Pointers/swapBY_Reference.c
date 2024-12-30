#include<stdio.h>

void swap(int* x, int* y){
    int temp; 
    temp = *x;  // temp = 2
    *x = *y;    // *x = 5 ~ a = 5
    *y = temp;  // *y = 2 ~ b = 2  
    return;
}

int main(){
    int a = 2; 
    int b = 5;
    swap(&a,&b);
    printf("%d\n",a);
    printf("%d",b);

    return 0;
}