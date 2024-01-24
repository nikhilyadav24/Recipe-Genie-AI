#include<iostream>
using namespace std;

int main() {
	int n ,even=0, odd=0,rest;
	cin>>n;
	while(n!=0){
		rest = n%10;
		if(rest%2==0){
			even = even+rest;
		}
		else{
			odd= odd+rest;
		}
		n =n/10;
	}
	cout<<even<<" "<<odd;

	
}