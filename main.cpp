// Lab8List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "list.h"
using namespace std;

int main()
{
	Node* Head = new Node;
	start(Head);
	cout << "Choose what you want to do:" << endl;
	char var;
	while (true) {
		cout << "-1 add tail" << endl
			<< "-2 readfromfile" << endl
			<< "-3 putElements" << endl
			<< "-4 writeToFile" << endl
			<< "-5 show" << endl
			<< "-6 reverse" << endl
			<< "-7 sort" << endl
			<< "-8 maxIndex" << endl
			<< "-9 exit" << endl << endl;
		cin >> var;
		switch (var)
		{
		case '1':
			addTail(Head);
			break;
		case '2':
			readFromFile(Head);
			break;
		case '3':
			putElements(Head);
			break;
		case '4':
			writeToFile(Head);
			break;
		case '5':
			show(Head);
			break;
		case '6':
			reverse(Head);
			break;
		case '7':
			sort(Head);
			break;
		case '8':
			maxIndex(Head);
			break;
		case '9':
			return 0;
		default:
			cout << "Wrong number. Try again" << endl;
			break;
		}
	}
}
