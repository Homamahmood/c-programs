#include<stdio.h>
int main(){
	int r,c;
	int i,j,k;
	printf("enter no row and column");
	scanf("%d%d",&r,&c);
	int a[r][c];
	int b[r][c];
	int x[r][c];
		printf("enter elements of matrix1:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
		printf("enter elements of matrix2:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("multiplication of marix:\n");
		for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			x[i][j]=0;
			for(k=0;k<c;k++){
				x[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
		for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}
			
	return 0;
}
