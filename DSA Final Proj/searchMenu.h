#include <iostream>
#include "searchAlgos.h"

using namespace std;
void searchMenu() {
	system("CLS");
	cout << "[1] Search Algorithms\n[2] Sorting Algorithms\n[3] Sample Applications\n[0] Back to Main Menu\n";
	int x;
	cin >> x;
	switch (x)
	{
	case 1:
		searchAlgos();
		break;
	default:
		break;
	}
}