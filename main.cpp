/*
Author: Giang Ly
Student ID: C427R468
Program Number: 5

Description of Problem:
You are going to write a program that changes a decimal number
into a binary number. In order to do this you have to write
a stack class. The stack class should be implemented using
the node class and will use dynamic memory to create nodes -
similar to linked list. The data for the node will be an integer
The stack should be generic. The code to use the stack and 
convert the number should be in the main program.*/

#include "stack.hpp"
#include "Node.hpp"
#include <iostream>

using namespace std;

int main (void)
{  
	int dec;
    // Create stack.  Stack will be empty at this point.
    Stack stack;
    
    //get number from user input.
	cout << "Enter a Number: ";
	cin >> dec;
    
    //Loop to determine if the remainder is 1 or 0. Then divide
    //the number by 2. Repeat while the number is greater than 1.
    while (dec >= 1)
    {
		//If number is even add 0 to stack. If number is odd
		//add 1 to stack.
		if (dec % 2 == 0)
		{
			stack.push(0);
		}
		else
		{
			stack.push(1);
		}
		dec = dec / 2;
	}
	
	cout << "The binary is: ";
	//Loop to output the stack starting from the top until
	//there are no more entries in the stack. 
	while (stack.get_count() >= 1)
	{
		//returns stack top
		cout << stack.stack_top();
		//deletes the stack top
		stack.pop();
	}
	
	cout << endl;
	return 0;
}
