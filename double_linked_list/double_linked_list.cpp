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
	void addNode();
	bool search(int rollNo, node** previous, node** current);
	bool deleteNode(int rollNo);
	bool listEmpty();
	bool ascending();
	void descending();
	void hapus();
	void searchData();
};

DoubleLinkedList::DoubleLinkedList() {
	START = NULL;
}

void DoubleLinkedList::addNode(){
	int nim;
	string nm;
	cout << "\nEnter the roll number of the student: ";
	cin >> nim;
	cout << "\nEnter the name of the student: ";
	cin.ignore();
	getline(cin, nm);
	node* newNode = new node();
	newNode->nomhs = nim;
	newNode->name = nm;


}