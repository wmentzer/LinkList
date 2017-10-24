#pragma once

#include "Iterator.h"

class List {
public:
	List() {this -> head = nullptr; this -> tail = nullptr;}
	~List() {}
	bool empty() const;
	void push_back(int x);
	void push_front(int x);
	int size();
	void pop_back();
	void pop_front();
	void insert(int x, Iterator i);
	void erase(Iterator i);
	Iterator begin();		// try const?
					// returns Iterator at beign of list
					// advance with it++

	Iterator end();			// Null pointer

private:				// Only 1 pointer to 1st link
	Link * head, * tail;
};
