#include <iostream>

using namespace std;

void Arrays2D() {
	string PATIENTS[2][5];
	system("cls");
	cout << "ARRAY 2D\n";
	cout << "========================\n" << endl;
	cout << "=================PATIENT DATA=================\n" << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	for (int i = 0; i < 2; i++)
	{

		cout << ("Enter the Patient ID Number       :   ");
		getline(cin, PATIENTS[i][0]);
		cout << ("Enter the Patient Name            :   ");
		getline(cin, PATIENTS[i][1]);
		cout << ("Enter the Patient Date of Birth   :   ");
		getline(cin, PATIENTS[i][2]);
		cout << ("Enter the Patient Doctor          :   ");
		getline(cin, PATIENTS[i][3]);
		cout << ("Enter Billing Amount              :   ");
		getline(cin, PATIENTS[i][4]);
		cout << "\n";
		cout << "----------------------------------------------\n" << endl;
	}
	for (int i = 0; i < 2; i++)
	{
		cout << PATIENTS[i][0] << endl;
		cout << PATIENTS[i][1] << endl;
		cout << PATIENTS[i][2] << endl;
		cout << PATIENTS[i][3] << endl;
		cout << PATIENTS[i][4] << endl;
		cout << "\n";
		cout << "----------------------------------------------\n" << endl;
	}
	cout << "\nPress any key to go back to Array & Pointers Menu...";
	system("pause");

}
