// Find the 2nd largest element in the givn Array
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7] = {1,2,3,4,3,2,1};
    int max_ele = INT_MIN;// INT_MIN = -2147483648 = (-32^2)
    int smax_ele = INT_MIN;
    // for(int i=0;i<=6;i++){
    //     if(max_ele<arr[i]) max_ele=arr[i];
    // }
    // printf("%d\n",max_ele);

    // //  max_ele=arr[i];

    // for(int i=0;i<=6;i++){
    //     if(arr[i]!=max_ele && smax_ele<arr[i]){
    //         smax_ele=arr[i];
    //     }
    // }
    // printf("%d\n",smax_ele);
    
    // SECOND METHOD
    for(int i=0;i<=6;i++){
        if(max_ele<arr[i]){
            smax_ele=max_ele;
            max_ele=arr[i];
        } 
        else if(smax_ele<arr[i] && max_ele!=arr[i]){
            smax_ele=arr[i];
        }
    }
    printf("%d\n",max_ele);
    printf("%d\n",smax_ele);
    return 0;
}