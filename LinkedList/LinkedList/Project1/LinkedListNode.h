#pragma once

class LinkedListNode
{
public:
	LinkedListNode(double VALUE, 
		           LinkedListNode * PREVIOUS = nullptr, 
		           LinkedListNode * NEXT = nullptr);
	
	LinkedListNode * previous;
	double data;
	LinkedListNode * next;
};