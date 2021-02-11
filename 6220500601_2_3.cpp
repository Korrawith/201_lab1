#include <stdio.h>
#include  <string.h>

int main(){
	

	int arr_size = 3;
    int number[arr_size];
    int i, tmp;
	char str[3];
	
	
	scanf("%s",str);
	
	 for(i=0; i<arr_size; i++)
    {
        printf(" %d : ", i+1);
        scanf("%d", &number[i]);
    }
    
	i = 0;
    do
    {
        if(i < arr_size-1 && number[i] > number[i+1])
        {
            tmp = number[i+1];
            number[i+1] = number[i];
            number[i] = tmp;
            i = 0;
        }
        else
        {
            i++;
        }
         
    }while(i < arr_size);
	
		
	if(strcmp(str,"ABC")){
		printf("%d %d %d",number[0],number[1],number[2]);   
	}	
	else if(strcmp(str,"ACB"))
	printf("%d %d %d",number[0],number[2],number[1]);
	else if(strcmp(str,"CAB"))
	printf("%d %d %d",number[2],number[0],number[1]);
	else if(strcmp(str,"CBA"))
	printf("%d %d %d",number[2],number[1],number[0]);
	
}
