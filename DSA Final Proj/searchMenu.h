#include <iostream>
#include "searchAlgos.h"
#include "sortingAlgos.h"
#include "sampleApp.h"
using namespace std;
void searchMenu() {
	system("CLS");
	cout << "SEARCH & SORTING ALGORITHMS" << endl;
	cout << "========================" << endl;
	cout << "[1] Search Algorithms\n[2] Sorting Algorithms\n[3] Sample Applications\n[0] Back to Main Menu\n";
	cout << "========================" << endl;
	cout << "Enter your Choice -> ";
	int x;
	cin >> x;
	switch (x)
	{
	case 1:
		searchAlgos();
		break;
	case 2:
		sortAlgosMenu();
		break;
	case 3:
		sampleApp();
		break;
	default:
		break;
	}
}