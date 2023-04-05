#include <iostream>
#include "dynamic_array.h"

int main()
{
	mystl::dynamic_array myArray;

	std::cout << "Size:\t\t" <<  myArray.size() << std::endl;
	std::cout << "Capacity:\t" << myArray.capacity() << std::endl;
	std::cout << "Is empty?:\t" << (bool)myArray.is_empty() << std::endl;
	myArray.push(20);
	myArray.push(30);
	std::cout << "Item at index 0 & 1:" << myArray.at(0) << " " << myArray.at(1)  << std::endl;
	
	std::cout << "--------------------------------------------------------------------------\n";
	std::cout << "Array: ";
	myArray.display();
	for (int i = 0; i < 14; ++i)
		myArray.push(i);
	std::cout << "Filled Array: ";
	myArray.display();
	std::cout << "Size:\t\t" << myArray.size() << std::endl;
	
	std::cout << "Array after inserting 99 @ index 5:\n";
	myArray.insert(5, 99);
	myArray.display();
	std::cout << "New size:\t" << myArray.size() << std::endl;
	std::cout << "Last Element:\t" << myArray.at(myArray.size()) << std::endl;
	std::cout << "New capacity:\t" << myArray.capacity() << std::endl;
	
	std::cout << "-------------------------------------------------------------------------\n";
	std::cout << "Array after prepending 0:" << std::endl;
	myArray.prepend(0);
	myArray.display();
	std::cout << "size:\t\t" << myArray.size() << std::endl;
	while (myArray.size() > 8 )
		std::cout << "Popped: " << myArray.pop() << std::endl;
	std::cout << "Size:\t\t" << myArray.size() << std::endl;
	std::cout << "Capacity:\t" << myArray.capacity() << std::endl;

	std::cout << "-------------------------------------------------------------------------\n";
	std::cout << "Deleting index 2: ";
	myArray.delete_index(2);
	myArray.display();


	std::cout << std::endl;

	return 0;
}
