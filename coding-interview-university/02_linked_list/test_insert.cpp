#include <iostream>
#include "linked_list.h"

int main()
{
	mystl::linked_list mylist;
	mylist.insert(1, 1);
	mylist.insert(0, 5);
//	mylist.insert(0, 1);
//	mylist.insert(1, 3);
//	mylist.insert(3, 7);
	mylist.display();
}
