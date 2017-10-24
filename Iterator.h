#pragma once

#include "Link.h"

class Iterator {
public:
	~Iterator() {}
	int & operator* () const;
	void operator++();
private:
	// Iterator constructor
	Iterator(Link * link) : link(link) {}

	// Link that the iterator is pointing to
	Link * link;

friend class List;
};
