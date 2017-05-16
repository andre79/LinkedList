#include "Node.h"

Node::Node(int v)
{
	m_value = v;
	m_next = nullptr;
}

int Node::getValue()
{
	return m_value;
}

void Node::value(int v)
{
	m_value = v;
}

Node& Node::getNextNode()
{
	return *m_next;
}

bool Node::nextNodeIsNull()
{
	return (m_next == nullptr);
}

void Node::nextNode(Node* n)
{
	m_next = n;
}