#include <iostream>
#include "linked_list.h"

int main()
{
	mystl::linked_list mylist;
	// testing push_back(int) works with empty list
	std::cout << "Empty? " <<  mylist.empty() << std::endl;
	std::cout << "Size: " << mylist.size() << std::endl;
	for (int i = 0; i < 5; ++i)
	{
		mylist.push_back(i);
	}
	mylist.display();
//	std::cout << "Popping 5 times: ";
//	for (int i = 0; i < 5; ++i)
//		std::cout << mylist.pop_back() << " ";
//	std::cout << std::endl << "Popping 1 more time: " << mylist.pop_back() << std::endl;
	
	// front()
	std::cout << "Front item: " << mylist.front() << std::endl;
	std::cout << "Back item: " << mylist.back() << std::endl;
}
