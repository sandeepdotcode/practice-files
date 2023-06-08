#include "linked_list.h"
#include <iostream>
#include <limits>

namespace mystl
{
	linked_list::~linked_list()
	{
		node *temp = head;
		while (head != nullptr)
		{
			head = temp->next;
			delete temp;
			temp = head;
		}
	}

	int linked_list::size()
	{
		return size_of_list;
	}

	bool linked_list::empty()
	{
		if (head == nullptr)
			return true;
		return
			false;
	}

	void linked_list::increment_size()
	{
		++size_of_list;
	}

	void linked_list::decrement_size()
	{
		--size_of_list;
	}

	void linked_list::push_front(int value)
	{
		if (head == nullptr)
		{
			node *temp = new node();
			temp->data = value;
			head = temp;
		}
		else
		{
			node *temp = new node();
			temp->data = value;
			temp->next = head;
			head = temp;
		}
		increment_size();
	}

	int linked_list::value_at(int index)
	{
		if (index < 0 || index >= size())
		{
			std::cerr << "Index out of bounds!\n";
			return 1;
		}
		node *temp = head;
		for (int i = 0; i < index; ++i)
			temp = temp->next;
		return temp->data;
	}

	int linked_list::pop_front()
	{
		if (head == nullptr)
		{
			std::cerr << "Empty List!" << std::endl;
			return std::numeric_limits<int>::min();
		}
		node *temp = head;
		head = head->next;
		decrement_size();
		int value = temp->data;
		delete temp;
		return value;
	}

	void linked_list::push_back(int value)
	{
		node *new_node = new node(), *temp = head;
		new_node->data = value;
		if (head == nullptr)
			head = new_node;
		else
		{
			while (temp->next != nullptr)
				temp = temp->next;
			temp->next = new_node;
		}
		increment_size();
	}

	int linked_list::pop_back()
	{
		if (head == nullptr)
		{
			std::cerr << "Empty List!" << std::endl;
			return std::numeric_limits<int>::min();
		}
		node *temp = head;
		int value = head->data;
		if (head->next == nullptr)
		{
			head = nullptr;
			delete temp;
			decrement_size();
			return value;
		}
		while (temp->next->next != nullptr)
			temp = temp->next;
		value = temp->next->data;
		delete temp->next;
		temp->next = nullptr;
		decrement_size();
		return value;
	}

	int linked_list::front()
	{
		if (head == nullptr)
		{
			std::cout << "Empty List!";
			return std::numeric_limits<int>::min();
		}
		return head->data;
	}

	int linked_list::back()
	{
		if (head == nullptr)
		{
			std::cout << "Empty List!";
			return std::numeric_limits<int>::min();
		}
		node *temp = head;
		while (temp->next != nullptr)
			temp = temp->next;
		return temp->data;
	}

	void linked_list::insert(int index, int value)
	{
		if (index < 0 || index > size())
		{
			std::cout << "Index out of bounds!" << std::endl;
			return;
		}
		node *new_node = new node(), *temp = head;
		new_node->data = value;
		if (head == nullptr)
		{
			head = new_node;
		}
		else if (index == 0) 
		{
			head->next = nullptr;
			new_node->next = head;
			head = new_node;
		}
		else 
		{
			for (int i = 0; i < index - 1; ++i)
				temp = temp->next;
			new_node->next = temp->next;
			temp->next = new_node;
		}
		increment_size();
	}

	void linked_list::display()
	{
		node *temp = head;
		while (temp != nullptr)
		{
			std::cout << temp->data << " ";
			temp = temp->next;
		}
		std::cout << std::endl;
	}
}
