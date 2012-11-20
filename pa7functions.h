//Patrick Whetsel
//CSCI 2312 Fall 2012
//pa7functions.h
//global function prototypes for pa7

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "list.h"

#ifndef _pa5functions_h
#define _pa5functions_h

namespace pa7functions
{
	//Pre: none
	//Post: displays program greeting, waits for input to continue
	void greeting();
	//Pre: requires linked list to store unsigned ints
	//Post: list is populated by user entered unsigned ints
	void populate_list(list<unsigned>);
	//Pre: none
	//Post: asks for user input to exit program
	void exit_program();
}

#endif