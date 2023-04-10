#ifndef LINKED_LIST_H
#define LINKED_LIST_H

namespace mystl
{
	class linked_list
	{
		public:
			linked_list();
			~linked_list();
			int size();
			bool empty();
			void push_front(int value);
		private:
			struct node
			{
				int data;
				struct node *next;
			}
			int size_of_list = 0;
			node* head = nullptr;
			void increment_size();
	}
}

#endif
