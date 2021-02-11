#include <iostream>
 using namespace std;
int main(){
	
	int a,b,c,sum=0;
	
	
	cout<<("enter a :");
	cin>>a;
	if(a<=30&&a>=0){
		cout<<("enter b :");
		cin>>b;
	}
	if(b<=30&&b>=0){
		cout<<("enter c :");
		cin>>c;
	}
	if(c<=40&&c>=0)
	sum = a+b+c;
	
	if(sum>=80&&sum<=100){
		cout<<("A");
	}
	else if(sum<80&&sum>=75){
		cout<<("B+");
	}
	else if(sum<75&&sum>=70){
		cout<<("B");
	}
	else if(sum<70&&sum>=65){
		cout<<("C+");
	}
	else if(sum<65&&sum>=60){
		cout<<("C");
	}
	else if(sum<60&&sum>=55){
		cout<<("D+");
	}
	else if(sum<55&&sum>=50){
		cout<<("D");
	}
	else {
		cout<<("F");
	}
}
