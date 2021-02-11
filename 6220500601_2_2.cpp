#include <stdio.h>
 
 
 
int main(){
	
	char n;
	double t,sum=0,sum1=0;
	
	
	scanf("%c",&n);
	scanf("%lf",&t);
	if(n=='A'){
		if(t>200){
        t=t-200;
        sum=(t-(int)t)*100/20;
        t=(int)t*3;
        sum1=199+t+sum;
		}
		else
			sum1 = 199;
		
	}
	else if(n=='B'){
		if(t>400){
		t=t-400;
        sum=(t-(int)t)*100/30;
        t=(int)t*2;
        sum1=299+t+sum;
		}
		else 
			sum1 = 299;
		
	}
	 printf("%.2lf",sum1);
	
	return 0;
}
