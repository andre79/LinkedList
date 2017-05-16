#ifndef NODE_H
#define NODE_H

class Node
{
public:
	Node(int v); //Overload to initial node.
	
	/*
	*	Method of usage in this class	
	*/
	int getValue();
	void value(int v);
	Node &getNextNode();
	bool nextNodeIsNull();	// restrict Access
	void nextNode(Node* n);
	
protected:
	int m_value = 0;
	Node* m_next = nullptr ;

};

#endif //NODE_H