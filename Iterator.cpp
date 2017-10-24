#pragma once

class Iterator() {

// Returns the value from the linked link
int Iterator::& operator* () const {
	return link -> value;
}

// Follows the pointer to the next link
void Iterator::operator++() {
	link = link -> next;
}

}
