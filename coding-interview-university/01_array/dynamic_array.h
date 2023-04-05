#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

namespace mystl
{
	class dynamic_array
	{
		public:
			dynamic_array();					// constructor
			~dynamic_array();					// destructor
			int size();
			int capacity();
			bool is_empty();
			int at(int index);
			void push(int item);
			void insert(int index, int item);
			void display();
			void prepend(int item);
			int pop();
			void delete_index(int index);
			int remove(int item);
			int find(int item);
		private:
			const int initial_capacity = 16;
			int *array = nullptr;
			int size_of_array = 0,
				curr_capacity = initial_capacity,
				resize_factor = 2;
			void resize(int new_capacity);
	};

}


		


#endif /* DYNAMIC_ARRAY_H */
