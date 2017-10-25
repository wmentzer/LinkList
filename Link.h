#pragma once

class Link {
private:
	Link(Link * next, int value) {
		next = next;
		value = value;
	}

	Link * next;
	int value;

friend class List;
friend class Iterator;
};
