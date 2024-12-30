//wap to printf all the ASCII values and their equivaent characters of 26 alphabets
#include<stdio.h>
int main(){
    for(int i=65;i<=90;i++){
        char ch = (char)i;
        printf("%d -> ",i);
        printf("%c\n",ch);
    }
}