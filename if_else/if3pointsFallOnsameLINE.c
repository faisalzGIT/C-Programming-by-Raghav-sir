//given three points... WAP to check if all three points fall on the straight line
#include<stdio.h>
int main(){
    double x1,x2,x3,y1,y2,y3,m1,m2;
    printf("Enter x1 and y1:");
    scanf("%d%d",&x1,&y1);

    printf("Enter x2 and y2:");
    scanf("%d%d",&x2,&y2);

    printf("Enter x3 and y3:");
    scanf("%d%d",&x3,&y3);

    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
 
    if(m1==m2){
        printf("Yes all three points lie on the same line");
    }
    else{
        printf("All three points do not lie on the same line");
    }
    return 0;
}