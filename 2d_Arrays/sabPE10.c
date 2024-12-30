// WAP to store 10 at every index of 2d matrix with 5 rows and 5 columns
#include<stdio.h>
int main(){
	int data[5][5];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			scanf("%d",&data[i][j]);
		}
	}

	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("%d ",data[i][j]);
		}
		printf("\n");
	}

}
