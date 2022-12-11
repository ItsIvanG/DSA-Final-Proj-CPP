#include <iostream>
#include "stackSTL.h"
#include "stackArray.h"
#include "stackLL.h"
using namespace std;
void stackMenu() {
	system("cls");
	cout << "STACK DATA STRUCTURE" << endl;
	cout << "========================" << endl;
	cout<<"[1] Stack using Array\n[2] Stack using Linked List\n[3] Stack in C++ STL\n[0] Back to Main Menu\n";
	cout << "========================" << endl;
	cout << "Enter your Choice -> ";
	int a;
	cin >> a;
	switch (a) {
	case 1:
		//stack using array
		stackArray();
		break;
	case 2:
		//stack using LL
		stackLL();
		break;
	case 3:
		//stack STL
		stackSTL();
		break;
	default:

		break;
	}
}