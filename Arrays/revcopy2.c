//WAP to copy the contents of one array in the reverse order without usn extra array
#include<stdio.h>

void rev(int arr[]){
    for(int  i=0,j=6;i<j;i++,j--){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}

int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    rev(arr);

    for(int i=0;i<=6;i++){
        printf("%d ",arr[i]);
    }
}