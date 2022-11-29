#include <iostream>
using namespace std;
void Arrays2D() {
	string PATIENTS[5][5];
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

	for (int i = 0; i < 5; i++)
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
	}
}
