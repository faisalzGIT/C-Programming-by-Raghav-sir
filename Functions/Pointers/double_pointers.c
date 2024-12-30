#include<stdio.h>
void main(){
    int a = 34;
    int* x = &a;// this stores the address of any variable except pointer itself
    printf("%d\n",*x); //

    //Double Pointer 
    int** y = &x; // this is used to store the address of a pointer
    printf("%p\n",&x);
    printf("%p\n",y);


    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    /*if i want to print the value whose address is stored in pointer 'x' 
    i can do it with two methods*/

    //Method 1
    printf("%d\n",*x);

    //Method 2 this is done by pointing value in 'a' through pointer 'x' through pointer 'y'
    printf("%d\n",**y); // example of double pointer

    //method 3 Triple pointer:
    int*** z = &y;
    printf("%d",***z);
}



