#include<stdio.h>
int main(){
    int score;
    printf("Enter Score:");
    scanf("%d",&score);
    if(score >= 80 && score <= 100){
        printf("Grade:A");
    }
    else if(score >= 60 && score < 80){
        printf("GRade:B");
    }
    else if(score >= 40 && score < 60){
        printf("Grade:C");
    }
    else if(score >= 20 && score < 40){
        printf("Grade:D");
    }
    else if(score >= 0 && score < 20){
        printf("Grade:F");
    }
    else{
        printf("Invalid Score");
    }
    return 0;
}