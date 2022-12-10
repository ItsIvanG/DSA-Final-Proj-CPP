#include <iostream>
#include "stackSTL.h"
#include "stackArray.h"
using namespace std;
void stackMenu() {
	system("cls");
	cout<<"[1] Stack using Array\n[2] Stack using Linked List\n[3] Stack in C++ STL\n[0] Back to Main Menu\n";
	int a;
	cin >> a;
	switch (a) {
	case 1:
		//stack using array
		stackArray();
		break;
	case 2:
		//stack using LL
		break;
	case 3:
		//stack STL
		stackSTL();
		break;
	default:

		break;
	}
}