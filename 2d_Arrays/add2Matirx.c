
// WAP to Add two matrices
#include<stdio.h>
int main(){
	int data[2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			scanf("%d",&data[i][j]);
		}
	}
	int data2[2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			scanf("%d",&data2[i][j]);
		}
	}

	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%d ",data[i][j]+data2[i][j]);
		}
		printf("\n");
	}

}
