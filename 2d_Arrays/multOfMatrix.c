//ALhamdulillah its done
//WAP to multiply two matrix
#include<stdio.h>
int main(){
	//first matrix:
	int m; 
	printf("Enter the no. of rows in first Matrix:");
	scanf("%d",&m);
	int n; 
	printf("Enter the no. of columns in first Matrix:");
	scanf("%d",&n);

	int a[m][n];

	printf("Enter First Matrix:\n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	//second matrix:
	int p; 
	printf("Enter the no. of rows in second Matrix:");
	scanf("%d",&p);
	int q; 
	printf("Enter the no. of columns in second Matrix:");
	scanf("%d",&q);

	int b[p][q];

	printf("Enter second Matrix:\n");
	for(int i = 0; i < p; i++){
		for(int j = 0; j < q; j++){
			scanf("%d",&b[i][j]);
		}
	}

	if(n!=p){
		printf("The multiplication is not possible:");
	}
	else{

		//the matrix multiplication:
		int res[m][q]; //the resultant matrix

		int cr = n; // the common number betw the two matrix i.e. column no. of 1st matrix and row no. of second matrix

		for(int i = 0; i < m; i++){
			for(int j = 0; j < q; j++){
					res[i][j] = 0;
				for (int k = 0; k < cr; k++){
					res[i][j] += a[i][k] * b[k][j];
				}
			}
		}

		//printing the resultant matrix:
		printf("printing the resultant matrix:\n");
		for(int i = 0; i < m; i++){
			for(int j = 0; j < q; j++){
				printf("%d ", res[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}