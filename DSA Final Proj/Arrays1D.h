#include <iostream>
using namespace std;
void Arrays1D() {

	system("cls");

	string PATID[5];
	string PATNAME[5];
	string DOB[5];
	string PATDOC[5];
	double BILLAMT[5];
	int n;
	cout << "Enter number of array items: \n";
	cin >> n;
	string temp;
	for (int i = 0; i < n; i++)
	{
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

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

	}
}