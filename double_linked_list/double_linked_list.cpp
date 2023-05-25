#include <iostream>
#include <string>
using namespace std;

class node {
public:
	int noMhs;
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

void DoubleLinkedList::addNode() {
	int nim;
	string nm;
	cout << "\nEnter the roll number of the student: ";
	cin >> nim;
	cout << "\nEnter the name of the student: ";
	cin.ignore();
	getline(cin, nm);
	node* newNode = new node();
	newNode->noMhs = nim;
	newNode->name = nm;

	if (START == NULL || nim <= START->noMhs) {
		if (START != NULL && nim == START->noMhs) {
			cout << "\nDuplicate number not allowed" << endl;
			return;
		}
		newNode->next = START;
		if (START != NULL)
			START->prev - newNode;
		newNode->prev = NULL;
		START = newNode;
		return;
	}
	node* current = START;
	while (current->next != NULL && nim > current->next->noMhs) 
		current = current->next;
		if (current->next != NULL && nim == current->next->noMhs) {
			cout << "\nDuplicate roll number not allowed: " << endl;
			return;
		}
		newNode->next = current->next;
		newNode->prev = current;
		if (current->next != NULL)
			current->next->prev = newNode;
		current->next = newNode;
}


bool DoubleLinkedList::search(int rollno, node * *previous, node * *current) {
	*previous = *current = START;
	while (*current != NULL && rollno != (*current)->noMhs) {
		*previous = *current;
		*current = (*current)->next;
	}
	return(*current != NULL);
}


