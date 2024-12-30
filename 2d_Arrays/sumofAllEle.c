// WAP to find the sum of all elements in a given matrix of n*m
#include<stdio.h>
int main(){
	int data[2][2];
	int sum=0;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			scanf("%d",&data[i][j]);
			sum+=data[i][j];
		}
	}
	printf("%d ",sum);
}