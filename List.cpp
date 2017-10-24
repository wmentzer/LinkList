#include "List.h"

bool List::empty() const {
	if(head == nullptr && tail == nullptr) {
		return true;
	} else {
		return false;
	}
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
Link * temp = new Link(nullptr, 0);
Link * temp2 = new Link(nullptr, 0);

temp = head;

while(temp -> next != nullptr) {
	temp2 = temp;

	temp = temp -> next;
}

temp2 = temp;
temp2 -> next = nullptr;
delete temp;
tail = temp2;

}

void List::pop_front() {
Link * temp = new Link(nullptr, 0);
temp = head -> next;
delete head;
head = temp;
}

int List::size() {
int count = 0;
Link * temp = new Link(nullptr, 0);
temp = head;
while(temp != nullptr) {
	temp = temp -> next;
	++count;
}
return count;
}

void List::insert(int x, Iterator i) {
//Link * temp = new Link(nullptr, 0);
//Iterator i = new Iterator(head);


}

void List::erase(Iterator i) {
}

Iterator begin() {
//	Iterator x = new Iterator(head);
//	return x;
}

Iterator end() {
//	Iterator x = new Iterator();
//	return x;
}
