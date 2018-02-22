#include "set.h"

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char* argv[]){
	Set a(10), b(4), c(2);
	cout << "Set a = " << a.ToString() << endl;
	a.PrintDetails();
	cout << "Set b = " << b.ToString() << endl;
	b.PrintDetails();
	cout << "Set c = " << c.ToString() << endl;
	c.PrintDetails();
	cout << "----------------------------------------------" << endl << endl;

	a.AddElement(2);
	cout << "a.AddElement(2)" << endl;
	a.AddElement(4);
	cout << "a.AddElement(4)" << endl;
	a.AddElement(6);
	cout << "a.AddElement(6)" << endl;
	b.AddElement(1);
	cout << "b.AddElement(1)" << endl;
	b.AddElement(3);
	cout << "b.AddElement(3)" << endl;
	cout << endl;

	cout << "Set a = " << a.ToString() << endl;
	a.PrintDetails();
	cout << "Set b = " << b.ToString() << endl;
	b.PrintDetails();
	cout << "Set c = " << c.ToString() << endl;
	c.PrintDetails();
	cout << "----------------------------------------------" << endl << endl;

	cout << "c = a" << endl;
	c = a;
	cout << "Set d(b)" << endl;
	Set d(b);

	cout << "Set a = " << a.ToString() << endl;
	a.PrintDetails();
	cout << "Set b = " << b.ToString() << endl;
	b.PrintDetails();
	cout << "Set c = " << c.ToString() << endl;
	c.PrintDetails();
	cout << "Set d = " << d.ToString() << endl;
	d.PrintDetails();
	cout << "----------------------------------------------" << endl << endl;

	return 0;
}
