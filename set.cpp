#include "set.h"

#include <string>
#include <sstream>
#include <iomanip>
#include <iostream>

using std::string;
using std::stringstream;
using std::setw;
using std::cout;
using std::endl;

void Set::PrintTrace(const string& details)const{
	cout << "----------------------------------------------" << endl;
	cout << "*** " << setw(33) << details << "***" << endl;
	cout << "*** this = " << setw(32) << this << "***" << endl;
	cout << "----------------------------------------------" << endl;
	cout << endl;
}

Set::Set(int maxElement): _maxElement(maxElement){
	_elements = new bool[maxElement];
	PrintTrace("Set::Set(int)");
}
Set::Set(const Set& other): _maxElement(other._maxElement){
	_elements = new bool[_maxElement];
	for (size_t i = 0; i < _maxElement; i++)
		_elements[i] = other._elements[i];
	PrintTrace("Set::Set(const Set&)");
}
Set::~Set(){
	if (_elements != nullptr)
		delete[] _elements;
	PrintTrace("Set::~Set()");
}
Set& Set::operator=(const Set& rhs){
	if (this != &rhs){
		if (_maxElement != rhs._maxElement){
			if (_elements != nullptr)
				delete[] _elements;
			_maxElement = rhs._maxElement;
			_elements = new bool[_maxElement];
		}
		for (size_t i = 0; i < _maxElement; i++)
			_elements[i] = rhs._elements[i];
	}
	PrintTrace("Set::operator=");
	return *this;
}
string Set::ToString()const{
	stringstream retVal;
	retVal << "{";
	for (size_t i = 0; i < _maxElement; i++){
		if (i != _maxElement - 1){
			if (_elements[i])
				retVal << setw(3) << i << ", ";
		}else{
			if (_elements[i])
				retVal << setw(3) << i;
		}
	}
	retVal << "}";
	return retVal.str();
}
bool Set::AddElement(unsigned int element){
	if (element >= _maxElement)
		return false;
	_elements[element] = true;
	return true;
}
bool Set::RemoveElement(unsigned int element){
	if (element >= _maxElement)
		return false;
	_elements[element] = false;
	return true;
}
bool Set::Contains(unsigned int element){
	if (element >= _maxElement)
		return false;
	return _elements[element];
}
	
