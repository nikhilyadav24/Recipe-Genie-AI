// User Input / Output

#include<iostream>
using namespace std;

int main() {
	char inp;
	cin>>inp;
	if('a' <= inp && inp <= 'z'){
		cout<<0;
	}
	else if('A' <= inp && inp <= 'Z'){
		cout<<1;
	}
	else{
		 cout<<-1; 
	}
	return 0;
	
}
// dont use
// 'a' <= inp <= 'z'(provies logical error)
