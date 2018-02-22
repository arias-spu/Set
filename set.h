#pragma once

#include <string>

using std::string;

/*
 * This class models a Set of naturals from 0 to maxElements - 1
 * If the object is constructred: Set set(5) it means that it
 * represents an empty set that can potentially hold elements
 * 0 to 4
 * Using method AddElement the user can add an element as long
 * as the element is valid.
 * For instance 
 * Set otherSet(4);		--->	otherSet = {}
 * otherSet.AddElement(2);  	--->	otherSet = {2}
 * otherSet.AddElement(0);	--->	otherSet = {0, 2}
 * This class models the elements by "turning on" the given 
 * element position on the _elements array
*/

class Set{
	size_t _maxElement;
	bool* _elements;
	void PrintTrace(const string&)const;
  public:
	Set(int);
	Set(const Set&);
	~Set();
	Set& operator=(const Set&);
	string ToString()const;
	void PrintDetails()const;
	bool AddElement(unsigned int);
	bool RemoveElement(unsigned int);
	bool Contains(unsigned int);
};
	
