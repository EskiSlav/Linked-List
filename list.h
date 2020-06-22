#ifndef __LIST_H__
#define __LIST_H__

#include <iostream>

struct Node {
	int x;
	Node * Next;
};

void addTail(Node*); // Function adds element to the end of the file
void putElements(Node*); // Function adds multiple elements
void show(Node*);        // Show list elements
void reverse(Node*);     // reverse list
void sort(Node*);        // sort list elements
void writeToFile(Node*); // write data to file in binary form
void readFromFile(Node*);// read from file list
void maxIndex(Node*);    // find max element and its index 
void start(Node *&);     // init list

#endif // __LIST_H__