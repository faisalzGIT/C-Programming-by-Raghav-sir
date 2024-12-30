// WAP to store roll number and marks obtained by 4 students side by side in a matrix
#include<stdio.h>
int main(){
	int data[4][2];
	for(int i=0;i<4;i++){
		for(int j=0;j<2;j++){
			if(j==0){
				printf("Enter Student's Roll.no:");
				scanf("%d",&data[i][j]);
			}
			else{
				printf("Enter Student's Marks:");
				scanf("%d",&data[i][j]);
			}
		}
	}

	for(int i=0;i<4;i++){
		for(int j=0;j<2;j++){
			printf("%d ",data[i][j]);
		}
		printf("\n");
	}

}