#include <stdio.h>

void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    int i = 0, j = 0, k = 0;

     
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    
    while (i < size1) {
        merged[k++] = arr1[i++];
    }

    
    while (j < size2) {
        merged[k++] = arr2[j++];
    }
}

int main() {
	int n,i,m;
	printf("entersize of array1:");
	scanf("%d",&n);
    int arr1[n];
        printf("enter sorted elements of array1:\n");

    for(i=0;i<n;i++){
    	scanf("%d",&arr1[i]);
	}
    	printf("entersize of array2:");
	scanf("%d",&m);
    int arr2[m];
    printf("enter sorted elements of array2:\n");
    for(i=0;i<m;i++){
    	scanf("%d",&arr2[i]);
	}
 
    int mergedSize = n+m;
    int merged[mergedSize];

   
    mergeSortedArrays(arr1, n, arr2, m, merged);

    
    printf("Merged array: ");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", merged[i]);
    }
    
    printf("\n");
    return 0;
}

