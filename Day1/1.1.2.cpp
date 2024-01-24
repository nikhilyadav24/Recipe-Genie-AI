// Data Type

#include <iostream>
using namespace std;

int dataTypes(string type) {
	if (type == "Integer") {
        return sizeof(int);
    } else if (type == "Long") {
        return sizeof(long);
    } else if (type == "Double") {
        return sizeof(double);
    } else if (type == "Character") {
        return sizeof(char);
	}else{
		return sizeof(float);
	}
}