#pragma once

class Link {
private:
	Link(Link * next, int value) {
		this -> next = next;
		this -> value = value;
	}

	Link * next;
	int value;

friend class List;
friend class Iterator;
};
