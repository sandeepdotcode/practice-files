#include "dynamic_array.h"
#include <iostream>

namespace mystl
{

	dynamic_array::dynamic_array()
    {
        array = new int[initial_capacity];
    }

	dynamic_array::~dynamic_array()
    {
        delete[] array;
    }

    int dynamic_array::size()
    {
        return size_of_array;
    }

    int dynamic_array::capacity()
    {
        return curr_capacity;
    }

    bool dynamic_array::is_empty()
    {
        return ( size_of_array == 0) ? true : false;
    }

	int dynamic_array::at(int index)
	{
		if (index < 0 || index >= curr_capacity)
		{
			std::cout << "\nIndex out of Bounds, Exiting program!" << std::endl;
			exit(1);
		}
		return array[index];
	}

	void dynamic_array::push(int item)
	{
		if (size_of_array == curr_capacity) return;
		array[size_of_array++] = item;
	}

	void dynamic_array::insert(int index, int item)
	{
		if (index > size_of_array)
		{
			std::cout << "\nIndex or (index - 1) doesn't exist" << std::endl;
			return;
		}
		if (size_of_array == curr_capacity) resize(curr_capacity * resize_factor);
		int *arr_ptr = array + size_of_array;
		while (arr_ptr != array + index)
		{
			*arr_ptr = *(arr_ptr - 1);
			--arr_ptr;
		}
		*arr_ptr = item;
		++size_of_array;
	}

	void dynamic_array::resize(int new_capacity)
	{
		int *new_array = new int[new_capacity];
		for (int i = 0; i < size_of_array; i++)
		{
			*(new_array + i) = *(array + i);
		}
		delete[] array;
		array = new_array;
		curr_capacity = new_capacity;
	}

	void dynamic_array::display()
	{
		for (int i = 0; i < size_of_array; ++i)
		{
			std::cout << *(array + i) << " ";
		}
		std::cout << std::endl;
	}
	
	void dynamic_array::prepend(int item)
	{
		insert(0, item);
	}

	int dynamic_array::pop()
	{
		int item_to_pop = *(array + --size_of_array);
		if (size_of_array <= curr_capacity/4) resize(curr_capacity / resize_factor);
		return item_to_pop;
	}

	void dynamic_array::delete_index(int index)
	{
		if (index >= size_of_array || index < 0)
		{
			std::cout << "\nIndex does not exist" << std::endl;
			return;
		}
		int *arr_ptr = array + index;
		while (arr_ptr < array + size_of_array - 1)
		{
			*arr_ptr = *(arr_ptr + 1);
			++arr_ptr;
		}
		--size_of_array;
		if (size_of_array <= curr_capacity/4) resize(curr_capacity / resize_factor);
	}

	// returns the item deleted or -1 if not found
	int dynamic_array::remove(int item)
	{
		int *arr_ptr = array;
		bool found = false;
		for (int i = 0; i < size_of_array; ++i)
		{
			if (*(arr_ptr + i) == item)
			{
				delete_index(i);
				found = true;
				--i;
			}
		}
		if (found == true) 
			return item;
		return -1;
	}

	// returns first index with item
	// or -1 if not found
	int dynamic_array::find(int item)
	{
		int *arr_ptr = array;
		for (int i = 0; i < size_of_array; ++i)
		{
			if (*(arr_ptr + i) == item)
				return i;
		}
		return -1;
	}

}
