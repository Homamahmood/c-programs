#include<stdio.h>
#include<string.h>
int main(){
	char ch[100];
	int i,v=0,c=0;
	printf("enter string of character:");
	scanf("%s",&ch);
	int len=strlen(ch);
	for(i=0;i<len;i++){
		if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'){
			v++;
		}
		else
		c++;
	} 
	printf("count of vowel = %d",v);
	printf("count of consonant = %d",c);
	
	
	
	return 0;
	
}
