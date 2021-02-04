#include <stdio.h>
 
 int main() {
 	
 	int n,i,j,sum,z;
 	
 	scanf("%d",&n);
 	
 	int a[n];
 	
	for(i = 0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	sum=a[0];
	for(j = 1;j<n;j++) 
	{
		if(a[j] > sum)
		{
		z = j;
		sum = a[j];
		}
	
	}
 	printf("%d %d",z+1,sum);
 	return 0;
 }
