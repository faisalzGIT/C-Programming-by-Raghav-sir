//WAP to find if the given number is prime or composite
#include<stdio.h>
int main(){
    int n,i,count;
     //i for loop 
    //n for number to check prime or composite 
    //n is also for condition of forLOOP 
    //count is for counting that how many times did the number got divided completely and didn't had an Remainder
    printf("Enter a Number:");
    scanf("%d",&n);

    /* [METHOD 1]
    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(n==1){
        printf("One is Neither Prime nor Composite"); 
    }
    if(count==2){
        printf("Prime");
    }
    else{
        printf("Composite");
    }
    */
   
    //[METHOD 2]
    for(i=2;i<n;i++){
        if(n%i==0){
            count++;
            break;
        }
    }
    if(n==0 || n==1){
        printf("Given Number is neither prime nor composite");
    }
    else if(n<0){
        printf("Negative Prime Number does not exist");
    }
    else if(count==0){
        printf("Prime");
    }
    else{
        printf("Composite");
    }

    return 0;
}