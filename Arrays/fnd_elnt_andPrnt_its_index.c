/* WAP to find a number in the given array and print it and its index no if present
*/
#include<stdio.h>
#include<stdbool.h>
int take(int x){
    printf("Enter Number to Search:");
    scanf("%d",&x);
    return x;
}

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int x = take(x);
    bool tf =false;
    int idx;
    for(int i=0;i<=6;i++){
        if(arr[i]==x){
            tf = true;
            idx=i;
            break;
        }
    }
    if(tf==true) printf("%d is present in the array and its index no. is %d\n",x,idx);

    else printf("%d is not present in the array\n",x);
}