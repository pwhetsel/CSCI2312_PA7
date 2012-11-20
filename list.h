//Patrick Whetsel
//CSCI 2312 Fall 2012
//list.h
//functions prototypes for list class

#include <cstdlib>
#include <iostream>
#include "node.h"

#ifndef _list_h
#define _list_h

template <typename T> class list;
template <typename T> std::ostream& operator << (std::ostream&, const list<T>&);
template<typename T>
class list
{
public:
	//default constructor
	list();
    //copy constructor
	list(const list<T>&);
	//destructor
	~list();
    //Pre:used is not 0
	//Post:head is deleted, and head's link becomes new head
	void pop_front();
    //Pre: None
	//Post: List is deleted
	void clear();
	//Pre: value to be stored
	//Post: new head node is created storing supplied data
	void push_front(const T&);
	//Pre: used is not 0
	//Post: node* is returned pointing to node containing target value
	node<T>* find(const T&);
	//Pre: value stored in node to be deleted, used > 0
	//Post: True is returned if target node is found and deleted, otherwise false
	bool erase_one(const T&);
	//Pre: used > 0
	//Post: none
	unsigned erase(const T&);
	//Pre: none
	//Post: number of nodes stored in list is returned
	unsigned size() const;
    //Pre: none
	//Post: returns true if list is empty
	bool empty() const;
	//Pre: used > 0
	//Post : returns data of head node
	const T& front() const;
	//Pre: list with used > 0
	//Post: outputs data of each node in list
	friend std::ostream& operator << <T>(std::ostream&, const list<T>&);

private:
    node<T>* head;
    unsigned used; //how much of this list is used
};

#include "list.tem"

#endif