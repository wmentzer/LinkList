
#include <iostream>
#include "List.h"
#include <cassert>

using namespace std;

// Test for size is 0 and list is empty.
// Tests begin() and end() and comparison operator
void test1() {
	List x;
	assert(x.empty() == true);
	assert(x.size() == 0);
	Iterator it = x.begin();
	Iterator end = x.end();
	assert(it == end);
}

// Tests size of 1 and derefence operator
void test2() {
	List x;
	x.push_back(3);
	assert(x.empty() == false);
	assert(x.size() == 1);
	Iterator it = x.begin();
	Iterator end = x.end();
	assert(*it == 3);
	*it = 4;
	assert(*it == 4);
	++it;
	assert(it == end);
	x.pop_back();
	assert(x.size() == 0);
	it = x.begin();
	assert(it == end);
}

// Tests push back and insert
void test3() {
	List x;
	x.push_back(3);
	x.push_back(2);
	x.push_back(1);
	assert(x.size() == 3);
	Iterator it = x.begin();
	Iterator end = x.end();
	++it;
	++it;
	x.insert(it,10);
	it = x.begin();
	assert(*it == 3);
	++it;
	assert(*it == 2);
	++it;
	assert(*it == 10);
	++it;
	assert(*it == 1);
	++it;
	assert(it == end);
}

// Tests erase and pop back
void test4() {
	List x;
	x.push_back(3);
	x.push_back(2);
	x.push_back(1);
	Iterator it = x.begin();
	Iterator end = x.end();
	++it;
	x.erase(it);
	it = x.begin();
	assert(*it == 3);
	++it;
	assert(*it == 1);
	++it;
	assert(it == end);
	x.pop_back();
	assert(x.size() == 1);
	x.pop_back();
	assert(x.size() == 0);

}

// Tests pop back
void test5() {
	List x;
	x.push_back(1);
	x.push_back(2);
	x.push_back(3);
	assert(x.size() == 3);
	Iterator it = x.begin();
	assert(*it == 1);
	++it;
	assert(*it == 2);
	++it;
	assert(*it == 3);
	it = x.begin();
	x.pop_back();
	it = x.begin();
	assert(x.size() == 2);
	it = x.begin();
	assert(*it == 1);
	++it;
	assert(*it == 2);
}

// Tests pop front
void test6() {
	List x;
	x.push_back(1);
	x.push_back(2);
	x.push_back(3);
	assert(x.size() == 3);
	Iterator it = x.begin();
	assert(*it == 1);
	++it;
	assert(*it == 2);
	++it;
	assert(*it == 3);
	it = x.begin();
	x.pop_front();
	it = x.begin();
	x.pop_front();
	it = x.begin();
	assert(*it == 3);
}

// Tests the dereference operator
void test7() {
	List x;
	x.push_front(3);
	x.push_front(2);
	x.push_front(1);
	assert(x.size() == 3);
	Iterator it = x.begin();
	Iterator end = x.end();
	assert(*it == 1);
	++it;
	assert(*it == 2);
	++it;
	assert(*it == 3);
	++it;
	assert(it == end);
}

int main() {

	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	test7();

	cout << "All tests passed." << endl;
}
