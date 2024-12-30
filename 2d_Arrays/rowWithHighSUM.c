// WAP to print the row number having maximumsum in a given matrix
#include<stdio.h>
#include<limits.h>
int main(){
	int arr[3][4]={
		{1,2,3,4},
		{1,2,3,53},
		{1,2,3,6}
	};
	int maxsum = INT_MIN;
	int ind;

	for (int i=0; i<3;i++){
		int sum=0;
		for (int j=0;j<4; j++){
			sum+=arr[i][j];
		}
		if(sum>maxsum){
			maxsum=sum; 
			ind = i;
		} 
	}

	printf("The row with maximum sum is %d, and its index is %d",maxsum,ind);
	
}