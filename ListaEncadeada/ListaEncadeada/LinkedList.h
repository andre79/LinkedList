#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList
{
public:
	LinkedList();	   //Standart list.
	LinkedList(int v); //Overload to initial list.

	bool isEmpty();
	void insert_front(int v);
	void insert_back(int v);
	int	 size();
	bool isExist(int v);
	void showElements();	
	void removeElement();

	virtual ~LinkedList(); //to distruct chield method

protected:
	Node* m_header = nullptr;
	Node* m_tail = nullptr;
};

#endif //LINKEDLIST_H