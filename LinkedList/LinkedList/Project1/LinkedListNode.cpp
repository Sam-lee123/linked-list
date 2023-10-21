#include "LinkedListNode.h"


LinkedListNode::LinkedListNode(double VALUE,
	                           LinkedListNode * PREVIOUS,
	                           LinkedListNode * NEXT)
	: previous(PREVIOUS),
	  data(VALUE),
	  next(NEXT)
{
	// Nothing here...
}