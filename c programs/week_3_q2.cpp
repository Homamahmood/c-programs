#include<stdio.h>
#include<math.h>
int main()
{
	int d,b=0,i=0;
	printf("Enter decimal no:");
	scanf("%d",&d);
	while(d>0){
		b+=(d%2)*pow(10,i++);
		d=d/2;
	}
	printf("%d",b);
	return 0;
}
