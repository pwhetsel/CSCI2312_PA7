//Patrick Whetsel
//CSCI 2312 Fall 2012
//pa7functions.h
//global function prototypes for pa7

#include <string>
#include <sstream>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "node.h"
#include "list.h"
#include "commas.h"
#include "tertiary.h"

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
	//Pre: requires linked list with stored unsigned ints
	//Post: list is output in columnar format, converted to base3 and with commas added
	void output_list(list<unsigned>);
	//Pre: none
	//Post: asks for user input to exit program
	int exit_program();
}

#endif