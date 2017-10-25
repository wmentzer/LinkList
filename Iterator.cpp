#include "Iterator.h"

// Returns the value from the linked link
int & Iterator::operator* () const {
	return link -> value;
}

// Follows the pointer to the next link
void Iterator::operator++() {
	link = link -> next;
}

bool Iterator::operator==(const Iterator & rhs) {
	return link == rhs.link;
}

