//Patrick Whetsel
//CSCI 2312 Fall 2012
//pa7functions.cpp
//global function definitions for pa7

#include "pa7functions.h"

void pa7functions::greeting()
{
	std::cout << "Welcome, This program will ask you for a series\n";
	std::cout << "of one or more positive numbers.  The program\n";
	std::cout << "will then add commas where appropriate to each\n";
	std::cout << "number and then convert the number into its base\n";
	std::cout << "3 form.  These two converted numbers will be\n";
	std::cout << "displayed in two columns.  Please press any key\n";
	std::cout << "followed by enter to continue.  ";
	int in;
	std::cin >> in;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << std::endl;
}
void pa7functions::populate_list(list<unsigned> holder)
{
	std::string line;
	bool exit = false;
	while (exit != true)
	{
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "\nPlease enter a positive integer to be converted('finished' when done): ";
		getline (std::cin, line);
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (line == "finished")
		{
			exit = true;
		}
		else
		{
			std::istringstream input(line);
			unsigned temp;
			input >> temp;
			holder.push_front(temp);
			line.clear();
		}
	}
}
void output_list(list<unsigned> unsigned_list)
{
	std::cout << std::setw(10) << std::right << "Original";
	std::cout << std::setw(13) << std::right << "Commas Added";
	std::cout << std::setw(22) << std::right << "Base3 Conversion";
	std::cout << std::endl;
	while(!unsigned_list.empty())
	{
		std::cout << std::setw(10) << std::right << unsigned_list.front();
		std::cout << std::setw(13) << std::right << commas(unsigned_list.front());
		std::cout << std::setw(22) << std::right << tertiary(unsigned_list.front());
		std::cout << std::endl;
		unsigned_list.pop_front();
	}
}
int pa7functions::exit_program()
{
	std::cout << "\nPress any key followed by enter to exit program. ";
	int exit;
	std::cin >> exit;
	return EXIT_SUCCESS;
}