// #include<stdio.h>
// int main(){
//     int n,i,j,m,k;
//     printf("ENTer a Number:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         m = 65;
//         k = 1;
//         for(j=1;j<=i;j++){
//             if(i%2==0){
//                 printf("%c",m);
//                 m++;
//             }
//             else{
//                 printf("%d",k);
//                 k++;
//             }

//         }
//         printf("\n");    
//     }
//     return 0;
// }








#include<stdio.h>
int main(){
    int n,i,j,m;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        m = 'A';
        for(j=1;j<=i;j++){
            if(i%2!=0){
                printf("%d",j);
            }
            else{
                printf("%c",m);
            }
            m++;
        }
        printf("\n");
    }
    return 0;

}