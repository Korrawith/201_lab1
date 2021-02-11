#include <stdio.h>
#include <string.h>
int main (){
	
	char num[10][6] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
	
	char n[1000002];
	
	scanf("%s",n);
	
	printf("%s",num[n[0]-'0']);
	int i;
	for (i=1; n[i]!='\0';i++){
		
		printf("%s",num[n[i]-'0']);
	}
	
}
