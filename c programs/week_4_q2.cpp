#include<stdio.h>
int main(){
	int i,j;
	int n,m;
 
	printf("enter size of matrix:");
	scanf("%d%d",&n,&m);
	printf("enter elements in matrix1:\n");
	int a[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter elements in matrix2:\n");
	int b[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&b[i][j]);
		}
	}
	int c[n][m];
		for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		 c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("sum of matrix:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
	
}
