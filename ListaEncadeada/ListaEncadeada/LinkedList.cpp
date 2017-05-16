
#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList()
{
};

LinkedList::LinkedList(int v)
{
	m_header = new Node(v);
	m_tail = m_header;
};

bool LinkedList::isEmpty()
{
	return (m_header == nullptr);
};

void LinkedList::insert_front(int v)
{
	Node* new_node = new Node(v);
	new_node->nextNode(m_header);
	m_header = new_node;
};

void LinkedList::insert_back(int v)
{
	Node* new_node = new Node(v);
	if(this->isEmpty())
	{
		m_header = new_node;
		m_tail	 = new_node;
	}
	else
	{
		m_tail->nextNode(new_node);
		m_tail = new_node;
	}
};

int LinkedList::size()
{
	int length = 0;
	if (this->isEmpty())
	{
		return length;
	}
	else
	{
		Node* s = m_header;
		do {
			s = &s->getNextNode();
			++length;
		} while (s);
	}
};

bool LinkedList::isExist(int v)
{
	bool exist = false;
	if (this->isEmpty())
	{
		return exist;
	}
	else
	{
		Node* s = m_header;
		do 
		{
			if (s->getValue() == v) 
				return true;
			else
				s = &s->getNextNode();
			
		} while (s);
	}
};

void LinkedList::showElements()
{
	bool exist = false;
	if (this->isEmpty()) {
		std::cout << "Não há valores a serem exibidos\n" << std::endl;
	} else {
		Node* s = m_header;
		std::cout << "\nElementos encontrados nessa lista: ";
		do
		{
			s->getValue();
			std::cout << "|" << s->getValue() << "|->";
			s = &s->getNextNode();
		} while (s);
		std::cout << "[x]\n";
	}
};

void LinkedList::removeElement()
{
	if(!this->isEmpty())
	{
		if(&m_header->getNextNode() == nullptr)
		{
			m_header = nullptr;
		}// para um elemento
		else if(&(&m_header->getNextNode())->getNextNode() == nullptr)
		{
			m_header->nextNode(nullptr);
		}// para dois elemento
		else
		{
			Node* prev_prev = m_header;
			Node* prev		= &m_header->getNextNode();
			Node* now		= &(&m_header->getNextNode())->getNextNode();

			while(now)
			{
				Node* aux = prev;
				prev	  = now;
				prev_prev = aux;
				now = &now->getNextNode();
			}

			delete &prev_prev->getNextNode();
			prev_prev->nextNode(nullptr);
			m_tail = prev_prev;
		}
	}
};

LinkedList::~LinkedList()
{
};
