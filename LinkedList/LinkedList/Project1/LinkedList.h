#pragma once

#include <iostream>
#include "LinkedListNode.h"

class LinkedList
{
public:
	LinkedList();
	~LinkedList();
	void PushBack(double value);
	void PopBack();
	bool Empty();
	void Clear();
	double Front();
	double Back();
	friend std::ostream & operator <<(std::ostream & ostr, const LinkedList & rhs);

private:
	LinkedListNode * Head;
};