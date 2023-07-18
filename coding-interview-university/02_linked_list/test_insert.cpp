#include <iostream>
#include "linked_list.h"

int main()
{
	mystl::linked_list mylist;
//	mylist.erase(3);
	mylist.insert(1, 1);
	mylist.insert(0, 5);
	mylist.insert(0, 1);
	mylist.insert(1, 3);
	mylist.insert(3, 7);
	mylist.display();
	// erase(int index)
//	mylist.erase(5);
//	mylist.erase(2);
//	mylist.display();
//	mylist.erase(0);
//	mylist.display();

	/* Value at n from end */
//	std::cout << mylist.value_n_from_end(5) << "\n";
//	std::cout << mylist.value_n_from_end(0) << "\n";
//	std::cout << mylist.value_n_from_end(2) << "\n";
//	std::cout << mylist.value_n_from_end(3) << "\n";
//	std::cout << mylist.value_n_from_end(4) << "\n";

	/* Reverse */
//	mylist.reverse();
//

	/* remove value */
	mylist.remove_value(20);
	mylist.remove_value(7);
	mylist.display();
	mylist.remove_value(3);
	mylist.display();
	mylist.remove_value(1);
	mylist.remove_value(9);
	mylist.display();
	mylist.remove_value(5);
	mylist.remove_value(10);
}
