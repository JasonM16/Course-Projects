/*
* ASSIGNMENT	: Lab 7
* FILE	 		: lab7.h
* AUTHOR		: Jason Choquette
* ID			: 104337378
* DATE			: November 13/14
* DESCRIPTION	: This file contains all the program dependencies, constants and
				  function prototypes for the program. For more details about 
				  the functions, see lab7.c
*/


// program dependencies
#include <stdio.h> // printf, scanf, NULL
#include <time.h>  // time

// Constants
#define MAX_SIZE 10


typedef int ARRAY[MAX_SIZE];

// function prototypes
void InitArray(ARRAY  *a, int size, int n);
void PrintArray(ARRAY *a, int size);
void PopulateArray(ARRAY *a, int size);
int SearchArray(ARRAY *a, int key);
int GetNumber(int min, int max);
