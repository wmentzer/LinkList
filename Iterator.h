#pragma once

#include "Link.h"

class Iterator {
public:
	int & operator* () const;
	void operator++();
	bool operator==(const Iterator & rhs);

private:
	// Iterator constructor
	Iterator(Link * link) : link(link) {}

	// Link that the iterator is pointing to
	Link * link;

	friend class List;
};
