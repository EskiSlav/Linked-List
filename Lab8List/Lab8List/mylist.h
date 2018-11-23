#ifndef __LIST_H__
#define __LIST_H__

#include "pch.h"
struct Node {
	int x;
	Node * Next;
};

void addTail(Node*);
void putElements(Node*);
void show(Node*);
void reverse(Node*);
void sort(Node*);
void writeToFile(Node*);
void readFromFile(Node*);
void maxIndex(Node*);
void start(Node *);

#endif __LIST_H__