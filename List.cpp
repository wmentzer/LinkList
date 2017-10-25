#include <cassert>
#include "List.h"

List::~List() {
	Link * temp = head;

	if(head == nullptr) {
	return;
	}

	while(temp->next != nullptr) {
		temp = temp -> next;
		delete temp;
	}

}

bool List::empty() const {
	return head == nullptr;
}

void List::push_back(int x) {
	Link * temp = new Link(nullptr, x);

	if(head == nullptr) {
		head = temp;
		tail = temp;
	} else {
		tail -> next = temp;
		tail = temp;
	}

}

void List::push_front(int x) {
	Link * temp = new Link(nullptr, x);
	temp -> next = nullptr;

	if(head == nullptr) {
		head = temp;
	} else {
		temp -> next = head;
		head = temp;
	}

}

void List::pop_back() {
	assert(head != nullptr);

	// special case with list has 1 link
	if(head -> next == nullptr) {
		delete head;
		head = nullptr;
		return;
	}

	Link * temp = head;

	while(temp -> next != tail) {
		temp = temp -> next;
	}

	tail = temp;
	tail -> next = nullptr;

}

void List::pop_front() {
	Link * temp = head -> next;
	delete head;
	head = temp;
}

int List::size() {
	int count = 0;
	Link * temp =  head;

	while(temp != nullptr) {
		++count;
		temp = temp -> next;
	}

	delete temp;
	return count;
}

void List::insert(Iterator i, int x) {
	Link * temp = new Link(nullptr, x);

	Iterator z = head;

	while(z.link->next != i.link) {
		++z;
	}

	z.link->next = temp;
	temp->next = i.link;

}

void List::erase(Iterator i) {
	Iterator z = head;

	while(z.link->next != i.link) {
		++z;
	}

	z.link->next = i.link->next;
	delete i.link;
}

Iterator List::begin() {
	return Iterator(head);
}

Iterator List::end() {
	return Iterator(nullptr);
}
