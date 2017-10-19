#include "Node.hpp"
#include <iostream>

// Default constructor
Node :: Node(int rem)
{
	remainder = rem;
	link = NULL;
}

//Mutator function to set link pointer of current node.
void Node :: set_link(Node *ptr)
{
	link = ptr;
}


//Accessor function to get link pointer of current node.
Node* Node :: get_link()
{
	return link;
}

//Accessor Function to get the remainder(1 or 0) of current node.
int Node :: get_remainder()
{
	return remainder;
}
	
