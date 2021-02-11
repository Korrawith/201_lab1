#include <iostream>
 using namespace std;
int main(){
	
	int a,b,c,sum=0;
	
	
	cin>>a;
	cin>>b;
	cin>>c;

	sum = a+b+c;
	
	if(sum>=80&&sum<=100){
		cout<<("A");
	}
	else if(sum>=75){
		cout<<("B+");
	}
	else if(sum>=70){
		cout<<("B");
	}
	else if(sum>=65){
		cout<<("C+");
	}
	else if(sum>=60){
		cout<<("C");
	}
	else if(sum>=55){
		cout<<("D+");
	}
	else if(sum>=50){
		cout<<("D");
	}
	else {
		cout<<("F");
	}
}
