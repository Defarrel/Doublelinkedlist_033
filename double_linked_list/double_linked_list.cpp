#include <iostream>
#include <string>
using namespace std;

class node {
public:
	int nomhs;
	string name;
	node* next;
	node* prev;
};

class DoubleLinkedList {
private:
	node* START;
public:

	DoubleLinkedList();
	void addode();
	bool search(int rollNo, node** previous, node** current);
	bool deleteNode(int rollNo);
	bool listEmpty();
	bool ascending();
	void descending();
};