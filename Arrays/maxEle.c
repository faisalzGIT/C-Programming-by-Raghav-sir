// Find the maximum value out of all the elements
#include<stdio.h>
#include<limits.h>
int main(){
    int max[7];
    
    for(int i=0;i<=6;i++){
        printf("Enter Ele=>");
        scanf("%d",&max[i]);
    }
    int max_ele = INT_MIN;// INT_MIN = -2147483648 = (-32^2)
    for(int i=0;i<=6;i++){
        if(max_ele<max[i]) max_ele=max[i];
    }
    printf("%d",max_ele);
    
    return 0;
}


