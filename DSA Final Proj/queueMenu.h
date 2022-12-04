#include <iostream>
#include "queueSTL.h"
#include "queueArray.h"
#include "queueLinkedList.h"
using namespace std;
void queueMenu() {
	system("cls");
	cout << "[1] Queue using Array\n[2] Queue using Linked List\n[3] Queue in C++ STL\n[0] Back to Main Menu\n";
	int a;
	cin >> a;
	switch (a) {
	case 1:
		//queue using array
		queueArray();
		break;
	case 2:
		//queue using LL
		queueLinkedList();

		break;
	case 3:
		//queueSTL
		queueSTL();
		break;
	default:

		break;
	}
}
