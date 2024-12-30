#include <stdio.h>

int factorial(int untill){// store is used to store factorial and untill is for the number whose factorial is needed
    int fact=1;
    for(int i=2; i<=untill; i++){
        fact = fact * i;
    }
    return fact;
}

int combination(int n,int r){
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}

int main()
{
    int n, r, nfact, rfact, nrfact, ncr;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter r:");
    scanf("%d",&r);
    
    // nfact = factorial(n);
    // rfact = factorial(r);
    // nrfact = factorial(n-r);


    //WE CAN FIND COMBINATION BY TWO 
    
    //1ST
    // ncr = nfact/(rfact*nrfact);

    //2ND 
    ncr = combination(n,r);

    printf("%d",ncr);
    return 0;
}