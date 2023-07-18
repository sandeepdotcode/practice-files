#ifndef LINKED_LIST_H
#define LINKED_LIST_H

namespace mystl
{			
	struct node
	{
		int data;
		struct node *next = nullptr;
	};

	class linked_list
	{
		public:
			~linked_list();
			int size();
			bool empty();
			void push_front(int value);
			void display();
			int value_at(int index);
			int pop_front();
			void push_back(int value);
			int pop_back();
			int front();
			int back();
			void insert(int index, int value);
			void erase(int index);
			int value_n_from_end(int n);
			void reverse();
			void remove_value(int value);
		private:
			int size_of_list = 0;
			node* head = nullptr;
			void increment_size();
			void decrement_size();
	};
}

#endif
