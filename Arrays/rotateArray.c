// rotate an array
#include<stdio.h>

void rev(int arr[],int si,int ei){
    for(int i=si,j=ei;i<=j;i++,j--){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}

int main(){
    int arr[7]= {1,2,3,4,5,6,7};
    int n=7;
    int k=3;
    k = k%n;
    rev(arr,0,n-1);
    rev(arr,0,k-1);
    rev(arr,k,n-1);
    for(int i=0;i<=6;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

// 5671234