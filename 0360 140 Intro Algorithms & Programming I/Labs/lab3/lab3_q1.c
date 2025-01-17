/*
 * ASSIGNMENT	: Lab 3
 * FILE	 		: lab3_q1.c
 * AUTHOR		: Jason Choquette
 * ID			: 104337378
 * DATE			: October 06/14
 * DESCRIPTION	: Write a program that prompts the user to enter an integer 
				  number between 1 and 10. The program will validate the 
				  input and print proper messages.
				  
				  Example: 
				  
				  Please enter an integer between 1 and 10: 5
				  You have entered a valid entry, Goodbye!

				  Please enter an integer between 1 and 10: 15
				  You have entered an invalid entry!!!
 */


#include <stdio.h> // scanf, printf


// program entry
int main (void)
{
	int input = 0;

	printf("\n\nPlease enter an integer between 1 and 10: ");

	// input
    scanf("%d", &input);
    
    printf("You have entered ");
    
    if (input <= 10 && input > 0)
    {
    	printf("a valid entry, Goodbye!");    
    }
    else
    {
    	printf("an invalid entry!!!");    
    }

	printf("\n\n");

	return 0;
}


// EOF
