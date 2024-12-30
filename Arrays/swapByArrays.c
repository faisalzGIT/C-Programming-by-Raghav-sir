#include<stdio.h>
void swap(int a[]){
    int temp = a[0];
    a[0]=a[1];
    a[1]=temp;
    return;
}
int main(){
    int arr[2]={3,6};
    printf("Before Swapp:%d %d\n",arr[0],arr[1]);
    swap(arr);
    printf("After Swapp:%d %d",arr[0],arr[1]);
}