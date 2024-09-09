#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("enter binary nunber:");
	scanf("%d",&n);
	int sum=0;
	int base=1;
	while(n!=0){
		int r=n%10;
		sum=sum+r*base;
		n=n/10;
		base=base*2;
	}
	printf("decimal number is %d",sum);
	return 0;
}
