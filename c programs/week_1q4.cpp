#include<stdio.h>
int main(){
	int a,b;
	char c;
	char c1;
	printf("Enter two no:");
	scanf("%d%d",&a,&b);
	printf("enter oprator(+,-,*,/)");
	scanf("%c",&c1);
	scanf("%c ",&c);
	if(c=='+'){
	int sum=a+b;
	printf("sum = %d",sum);
}
	else if(c=='-'){
	int sub=a-b;
	printf("subtract = %d",sub);
	
}
	else if(c=='*'){
	int mul=a*b;
	printf("multiplication = %d",mul);
	
}
	else if(c=='/'){
	int div=a/b;
	printf("division = %d",div);
	
}
else
printf("enter valid operator");
	return 0;
}
