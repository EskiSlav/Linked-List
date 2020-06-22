#include "list.h"
#include <fstream>
using namespace std;

void start(Node *& head) {
	Node* temp = head;
	int var;
	cout << "To stop entering numbers just type any non-number sybmol.\nEnter 1 value: ";
	cin >> temp->x;
	for (int i = 2; ; i++) {
		cout << "Enter " << i << " value: ";
		if ((cin >> var).good()) {
			temp->Next = new Node;
			temp = temp->Next;
			temp->x = var;
			continue;
		}
		else if ((cin >> var).fail()) {
			cin.clear();
			cin.ignore(~(unsigned int)0, '\n');
			break;
		}
	}
	temp->Next = NULL;
}

void show(Node* head) {
	cout << "-----------------------" << endl;
	for (Node* temp = head; temp != NULL; temp = temp->Next) {
		cout << temp->x << ' ';
	}
	cout << endl << "-----------------------" << endl;
	cout << endl;
}

void addTail(Node * head) {
	if (head == NULL) {
		Node * temp = new Node;
		cout << "Type value: ";
		cin >> temp->x;
		temp->Next = NULL;
		head = temp;
	}
	else {
		Node* temp = head;
		while (temp->Next != NULL) {
			temp = temp->Next;
		}
		temp->Next = new Node;
		temp = temp->Next;
		cout << "Enter a value: ";
		cin >> temp->x;
		temp->Next = NULL;
	}
}

void putElements(Node* head) {
	cout << "How many elements you want to enter?: ";
	int num;
	while (true) {
		if ((cin >> num).fail()) {
			cout << "Wrong value!" << endl;
			cin.clear();
			cin.ignore(~(unsigned int)0, '\n');
		}
		else {
			Node * temp = head;
			int k = 1;
			while (temp->Next != NULL) {
				temp = temp->Next;
				k++;
			}
			for (int i = 0; i < num; i++) {
				temp->Next = new Node;
				temp = temp->Next;
				cout << "Enter a value " << k << ": ";
				cin >> temp->x;
				k++;
			}
			temp->Next = NULL;
			return;
		}
	}
}

void reverse(Node* head) {
	for (Node* temp = head; temp != NULL; temp = temp->Next) {
		for (Node* temp1 = temp; temp1 != NULL; temp1 = temp1->Next) {
			int c = temp->x;
			temp->x = temp1->x;
			temp1->x = c;
		}
	}
}

void maxIndex(Node* head) {
	int i = 0, index = 0, max = head->x;
	for (Node * temp = head; temp != NULL; temp = temp->Next, i++) {
		if (temp->x > max) {
			max = temp->x;
			index = i;
		}
	}
	cout << "Max element is /" << max << "\\ with index /" << index << "\\" <<  endl;
}

void readFromFile(Node* head) {
	Node * temp = head;
	ifstream input("data.dat", ios::binary);
	int k = 0;
	while (input.read((char*)&temp->x, sizeof(int))) {
		temp->Next = new Node;
		temp = temp->Next;
		k++;
	}
	temp = head;
	for (int i = 1; i < k; i++) {
		temp = temp->Next;
	}
	temp->Next = NULL;
	input.close();
}

void writeToFile(Node* head) {
	Node * temp = head;
	ofstream output("data.dat", ios::binary);
	while (temp != NULL) {
		output.write((char*)&temp->x, sizeof(int));
		temp = temp->Next;
	}
	output.close();
}

void sort(Node* head) {
	for (Node* temp = head; temp != NULL; temp = temp->Next) {
		for (Node* temp1 = temp; temp1 != NULL; temp1 = temp1->Next) {
			if (temp->x > temp1->x) {
				int c = temp->x;
				temp->x = temp1->x;
				temp1->x = c;
			}
		}
	}
}