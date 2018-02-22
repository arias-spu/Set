#include "set.h"

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char* argv[]){
	Set a(10), b(4), c(2);
	cout << "Set a = " << a.ToString() << endl;
	cout << "Set b = " << b.ToString() << endl;
	cout << "Set c = " << c.ToString() << endl;


	return 0;
}
