#ifndef LINKED_LIST_H
#define LINKED_LIST_H

namespace mystl
{
	class linked_list
	{
		public:
			int size();
			linked_list();
			~linked_list();
		private:
			struct node
			{
				int data;
				struct node *next;
			}
			int size_of_list = 0;
			node* head = nullptr;
	}
}

#endif
