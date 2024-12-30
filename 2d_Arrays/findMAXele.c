// WAP to find the biggest and the smallest element in the given 2d array and print their index NUMBER
#include<stdio.h>
#include<limits.h>
int main(){
	int data[2][2];
	int bigg = INT_MIN;
	int ismal = INT_MAX;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			scanf("%d",&data[i][j]);
			if(ismal>data[i][j]) ismal=data[i][j]; 
			if(bigg<data[i][j]) bigg=data[i][j];
		}
	}
	printf("\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			if(ismal==data[i][j]) printf("The index for smallest is (%d,%d)\n",i,j); 
			if(bigg==data[i][j]) printf("The index for biggest is (%d,%d)\n",i,j); 
		}
	}
	printf("%d\n",bigg);
	printf("%d\n",ismal);

}