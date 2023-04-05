#include <iostream>
#include "dynamic_array.h"

int main()
{
	mystl::dynamic_array myArray;

	myArray.push(20);
	myArray.push(1);
	myArray.push(20);
	myArray.push(20);
	myArray.push(2);
	myArray.push(3);
	myArray.push(4);
	myArray.push(5);
	myArray.push(6);
	myArray.push(20);
	myArray.push(20);
	myArray.push(20);

	std::cout << "Size:\t\t" << myArray.size() << std::endl;
	std::cout << "Capacity:\t" << myArray.capacity() << std::endl;
	myArray.remove(20);
	std::cout << "After removing 20: ";
	myArray.display();
	std::cout << std::endl;
	std::cout << "Size:\t\t" << myArray.size() << std::endl;
	std::cout << "Capacity:\t" << myArray.capacity() << std::endl;

	std::cout << "Index of 3: " << myArray.find(3) << std::endl;
	std::cout << "Index of 56: " << myArray.find(56) << std::endl;
}
