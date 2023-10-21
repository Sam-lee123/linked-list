#include "LinkedList.h"

LinkedList::LinkedList()
	: Head(nullptr)
{
	// Nothing here...
}

void LinkedList::Clear()
{
	LinkedListNode * Current = Head;
	while (Current != nullptr)
	{
		LinkedListNode * Next = Current->next;
		delete Current;
		Current = Next;
	}

	Head = nullptr;
}

double LinkedList::Front()
{
	return Head->data;
}

double LinkedList::Back()
{
	LinkedListNode * Current = Head;
	while (Current->next != nullptr)
	{
		Current = Current->next;
	}
	return Current->data;
}

LinkedList::~LinkedList()
{
	Clear();
}

void LinkedList::PushBack(double value)
{
	if (Head != nullptr)
	{
		LinkedListNode * Current = Head;
		while (Current->next != nullptr)
		{
			Current = Current->next;
		}
		LinkedListNode * Temp = new LinkedListNode(value, Current);
		Current->next = Temp;
	}
	else
	{
		Head = new LinkedListNode(value);
	}
}

void LinkedList::PopBack()
{
	if (Head == nullptr)
	{
		// Empty linked list
		throw std::out_of_range("Tried to pop empty linked list");
	}
	if (Head->next == nullptr)
	{
		// Linked list sized one
		delete Head;
		Head = nullptr;
	}
	else
	{
		// Linked list sized two or more
		LinkedListNode * Current = Head;
		while (Current->next != nullptr)
		{
			Current = Current->next;
		}
		Current->previous->next = nullptr;
		delete Current;
	}
}

bool LinkedList::Empty()
{
	return Head == nullptr;
}

std::ostream & operator<<(std::ostream & ostr, const LinkedList & rhs)
{
	LinkedListNode * Current = rhs.Head;
	ostr << "X ";
	while (Current != nullptr)
	{
		ostr << Current->data << " ";
		Current = Current->next;
	}
	ostr << "X";
	return ostr;
}