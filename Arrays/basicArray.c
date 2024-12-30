#include<stdio.h>
int main(){
    // int arr[5] = {4,25,32,53,2};
    // printf("%d\n",arr[2]);
    // arr[2]=3432;
    // printf("%d\n",arr[2]);


    int n_arr[5];
    for(int i=0; i<=4;i++){
        printf("Enter no. %d=>",i);
        scanf("%d",&n_arr[i]);
    }
    for(int i=4; i>=0;i--){
        printf("%d\n",n_arr[i]);
    }


    return 0;
}             