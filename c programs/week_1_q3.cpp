#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(a>c))
	printf("%d is largest",a);
	else if((b>a)&&(b>c))
	printf("%d is largest");
	else
	printf("%d is largest",c);
	return 0;
}
