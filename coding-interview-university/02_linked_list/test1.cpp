#include <iostream>
#include "linked_list.h"

int main()
{
	mystl::linked_list myList;
	std::cout << "Size:\t\t" << myList.size() << std::endl;
	std::cout << "Empty:\t\t" << myList.empty() << std::endl;

	for (int i = 0; i < 5; ++i)
		myList.push_front(i);
	myList.display();
	std::cout << "At index 3:\t" << myList.value_at(3) << std::endl;
	std::cout << "At index 10:\t" << myList.value_at(10) << std::endl;

	std::cout << "Popping front twice: " << myList.pop_front() << " " << myList.pop_front() << std::endl;
	myList.display();
	std::cout << "Size:\t\t" << myList.size() << std::endl;
	std::cout << "Empty?:\t\t" << myList.empty() << std::endl;

	for (int i = 1; i <= 3; ++i)
		myList.push_back(i);
	myList.display();
	std::cout << "Size:\t\t" <<  myList.size() << std::endl;
}
