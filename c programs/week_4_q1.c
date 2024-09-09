#include<stdio.h>
int main() {
	int i, n;
	int sum=0;
	printf("enter size of array: ");
	scanf("%d", &n);
	int arr[n];
	for(i=0; i<n; i++) {
		printf("enter %d element of array: \n",i);
		scanf("%d", &arr[i]);
			}
    int max=arr[0];
    for(i=0;i<n;i++){
    	if(max<arr[i]){
    		max=arr[i];
		}
	}
	printf("maximum = %d\n", max);
	int min=arr[0];
	 for(i=0;i<n;i++){
    	if(min>arr[i]){
    		min=arr[i];
		}
	}
	printf("minimum = %d", min);
		for(i=0; i<n; i++) {
	 sum=sum+arr[i];
			}
			printf("\nsum of array is = %d\n", sum );
			int avg = sum/n;
			printf("average of array = %d",avg);
	return 0;
}
