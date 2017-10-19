/*
Function: Node
Constructor: defaults remainder to predetermined value.
Make ptr NULL. 
Inputs: None
Outputs: None data is going to be zeroed
Return: N/A
	Zero out remainder

Function: Node
Constructor: Takes in integer and set remainder as integer.
Inputs: rem
Outputs: None
Returns: None

Function: get_link
Description: Accessor function to get link.
Inputs: None
Output: None
Return: link

Function: set_link
Description: Mutator function to set link.
Input: *ptr
Output: None
Return: None

Function: get_remainder
Description: Accessor function to get remainder.
Inputs: None
Outputs: None
Return: remainder
*/
#include <string>

#ifndef __NODE__
#define __NODE__
class Node
{
	//Declare class variables *Private
	int remainder; 
	Node *link;
	
	//Public allows access to data
	public:
        //default constructor
		Node()
		{
			remainder = 0;
			link = NULL;
		}
	    Node (int rem);
        //Function Prototypes
		void set_link(Node *ptr);
		Node* get_link();
		int get_remainder();
};
#endif
