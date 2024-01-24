// is else(decision making)
#include <iostream>
using namespace std;

string compareIfElse(int a, int b) {
	if(a>b)
		return "greater";
	else if(a<b)
		return "smaller";
	else
		return "equal";
}
