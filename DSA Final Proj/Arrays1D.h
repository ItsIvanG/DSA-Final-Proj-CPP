#include <iostream>
#include <string>

using namespace std;

void Arrays1D()
{
	system("cls");
	cout << "ARRAY 1D\n";
	cout << "========================\n" << endl;
	string PATID[2];
	string PATNAME[2];
	string DOB[2];
	string PATDOC[2];
	double BILLAMT[2];
	int n = 2;

	string temp;

	cin.ignore();
	cout << "=================PATIENT DATA=================\n" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << ("Enter the Patient ID Number       :   ");
		getline(cin, PATID[i]);
		cout << ("Enter the Patient Name            :   ");
		getline(cin, PATNAME[i]);
		cout << ("Enter the Patient Date of Birth   :   ");
		getline(cin, DOB[i]);
		cout << ("Enter the Patient Doctor          :   ");
		getline(cin, PATDOC[i]);
		cout << ("Enter Billing Amount              :   ");
		getline(cin, temp);
		BILLAMT[i] = stod(temp);
		cout << "\n";
		cout << "----------------------------------------------\n" << endl;
	}

	for (int i = 0; i < 2; i++)
	{

		cout << PATID[i] << endl;
		cout << PATNAME[i] << endl;
		cout << DOB[i] << endl;
		cout << PATDOC[i] << endl;
		cout << BILLAMT[i] << endl;
		cout << "\n";
		cout << "----------------------------------------------\n" << endl;
	}
	cout << "\nPress any key to go back to Array & Pointers Menu...";
	system("pause");

}
