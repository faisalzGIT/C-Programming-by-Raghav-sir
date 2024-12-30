#include<stdio.h>
int main(){
    void india();;
    india(); //1
    return 0; //10
}
void india(){
    printf("Calling India\n"); //2
    void australia();
    australia(); //3
    return; //9
}
void australia(){
    printf("Calling australia\n"); //4
    void england();
    england(); //5
    return; //8
}
void england(){
    printf("calling england\n"); //6
    return; //7
}