// Lab8List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "list.h"
using namespace std;

int main()
{
	Node* head = new Node;
	start(head);
	cout << "Choose what you want to do:" << endl;
	char var;
	while (true) {
		cout << " - 1 add tail" << endl
			<< " - 2 readfromfile" << endl
			<< " - 3 putElements" << endl
			<< " - 4 writeToFile" << endl
			<< " - 5 show" << endl
			<< " - 6 reverse" << endl
			<< " - 7 sort" << endl
			<< " - 8 maxIndex" << endl
			<< " - 9 exit" << endl << endl;
		cin >> var;
		// Uncomment if you want your screen cleared every time
		// you choose any option
		// system("clear");
		switch (var)
		{
		case '1':
			addTail(head);
			break;
		case '2':
			readFromFile(head);
			break;
		case '3':
			putElements(head);
			break;
		case '4':
			writeToFile(head);
			break;
		case '5':
			show(head);
			break;
		case '6':
			reverse(head);
			break;
		case '7':
			sort(head);
			break;
		case '8':
			maxIndex(head);
			break;
		case '9':
			return 0;
		default:
			cout << "Wrong number. Try again" << endl;
			break;
		}
	}
}
