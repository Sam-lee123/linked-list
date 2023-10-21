#include <iostream>
#include <list>
#include "LinkedList.h"

int main()
{
	LinkedList x;
	std::cout << "Empty = " << x.Empty() << std::endl;
	std::cout << x << std::endl;
	x.PushBack(25.8);
	std::cout << x << std::endl;
	std::cout << "Empty = " << x.Empty() << std::endl;
	x.PushBack(15.9);
	std::cout << x << std::endl;
	x.PushBack(1.6);
	std::cout << x << std::endl;
	x.PushBack(4.3);
	std::cout << x << std::endl;
	x.Clear();
	std::cout << x << std::endl;
	system("PAUSE");
	return 0;
}

