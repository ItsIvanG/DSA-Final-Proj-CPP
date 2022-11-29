#include <iostream>
#include "Arrays1D.h"
#include "Arrays2D.h"

using namespace std;
void ArraysMenu() {
	cout << "[1] Array [One Dimensional]\n[2] Array[Two Dimensional]\n[3] Pointers\n[0] Back to Main Menu\n";
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
	default:
		break;
	}
}

