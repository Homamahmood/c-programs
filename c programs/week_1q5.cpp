#include<stdio.h>
int main(){
	int year;
	printf("Enter a year:");
	scanf("%d",&year);
	
	if(year%400==0){
		printf("%d is a laep year",year);
	}
	else if(year%100==0){
	printf("%d is not a laep year",year);
}
else if(year%4==0){
	printf("%d is a leap year",year);
}
else{
	printf("%d is not a leap year",year);
}
return 0;
}
