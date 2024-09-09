#include<stdio.h>
int main(){
	int n,m,i,j;
	printf("Enter size of matrix:");
	scanf("%d %d",&n,&m);
	int arr[n][m];
	printf("enter the elments of matrix:\n ");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d  ",&arr[i][j]);
		}
	}
	printf("orignal matrix:\n");
		for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d  ",arr[i][j]);
		}
		printf("\n");
	}

	printf("transpose  matrix:\n");
		for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d  ",arr[j][i]);
		}
		printf("\n");
	}	return 0;
}
