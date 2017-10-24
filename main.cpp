
#include <iostream>
#include "List.h"
#include <cassert>
//#include <list>		// Take this out

using namespace std;

void test1() {
	List x;
	assert(x.empty() == true);
	assert(x.size() == 0);
	x.push_back(3);
	x.push_front(2);
	cout << x.size() << endl;
	assert(x.empty() == false);
	x.pop_back();
	x.pop_front();
	cout << x.size() << endl;
	assert(x.size() == 0);
}

void test2() {
/*	list<int> x;
	assert(x.empty());
	x.push_back(17);
	assert(!x.empty());
	x.push_front(3);
	x.push_back(10);
	assert(x.size() == 3);
	Iterator it = x.begin();
	assert(*xit == 3);
	++it;
	assert(*it == 17);
	++it;
	assert(*it == 10);
	++it;
	assert(it == x.end());
*/
}


int main() {

	test1();

	cout << "All tests passed." << endl;
}
