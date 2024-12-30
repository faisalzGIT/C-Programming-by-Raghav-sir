// WAP to find a duplicate element from a given array of integers
#include<stdio.h>
int main(){
    int arr[7]={1,2,7,5,8,7,4};
    int same=0;
    for(int i=0;i<=6;i++){
        for(int j=i+1;j<=6;j++){
                if(arr[i]==arr[j]){
                    printf("Yes there is same element in the array namely: %d",arr[j]);
                    break;
                }
        } 
    }

}