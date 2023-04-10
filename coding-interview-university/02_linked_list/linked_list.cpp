#include "linked_list.h"

namespace mystl
{
	linked_list::linked_list()
	{

	}

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

	void linked_list::push_front()
	{
		if (head == nullptr)
		{
			node *temp = new node();
			head = temp;
		}
		else
		{
			node *temp = new node();
			temp->next = head;
			head = temp;
		}
		increment_size();
	}
}
