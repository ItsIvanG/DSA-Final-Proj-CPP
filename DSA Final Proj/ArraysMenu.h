#include <iostream>
#include "Arrays1D.h"
#include "Arrays2D.h"
#include "ArraysPointers.h"

using namespace std;
void ArraysMenu() {
	system("CLS");
	cout << "================ARRAYS & POINTERS================\n" << endl;
	cout << "=================================================" << endl;
	cout << "[1] Array [One Dimensional]\n[2] Array[Two Dimensional]\n[3] Pointers\n[0] Back to Main Menu\n";
	cout << "=================================================" << endl;
	cout << "Enter your Choice -> ";
	int x;
	cin >> x;
	switch (x)
	{
	case 1:
		Arrays1D();
		break;
	case 2:
		Arrays2D();
		break;
	case 3:
		Pointers();
		break;
	default:

		break;
	}
}

