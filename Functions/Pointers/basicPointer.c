#include<stdio.h>
int main(){
    int a = 4;
    int* x = &a;
    /*  OR 
            int *x;
        OR
            int*x;

        Now Initialization:
            x = &a;

    */
    printf("%p\n",&a);// Printing address of the a
    printf("%p\n",x);// printing the address of 'a' which is stored in pointer 'x'
    printf("%d\n\n\n\n",*x);//printing that which is stored on that address
    

                                                  
    //Changing the value stored on the Address that is stored in the Pointer 'q'
    int v = 25;
    int* q = &v;
    *q = 10;
    printf("%d",*q);
}

