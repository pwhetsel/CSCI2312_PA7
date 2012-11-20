//Patrick Whetsel
//CSCI 2312 Fall 2012
//node.h
//function prototypes for node class

#ifndef _node_h
#define _node_h

template <typename T>
class node
{
public:
	//Constructor
    node(const T&, node<T>*);
    
	//Pre: None
	//Post: datafield is set to supplied value
	void set_data(const T& val);
	
	//Pre: None
	//Post: Link is set to supplied node*
    void set_link(const node<T>* n); 
 
    //Pre: None
	//Post: Const datafield is returned
    T get_data() const;
	
	//Pre: None
	//Post: datafield is returned
    T get_data(); 
    
	//Pre: None
	//Post: const linkfield is returned
    const node<T>* get_link() const;
    
	//Pre: None
	//Post: linkfield is returned
    node<T>* get_link(); 
    
    
private:
    T datafield;
    node<T> *linkfield;
    
};

#include "node.tem"

#endif