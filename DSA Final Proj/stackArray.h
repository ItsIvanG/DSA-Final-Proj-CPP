#include <iostream>
using namespace std;

const int MAX = 8;
int PT[MAX];
int Top;

void TopValue()
{

    Top = -1;

}

void Push()
{

    int PATID;

    if (Top >= MAX - 1)
    {

        cout << "\nStack Overflow! You've reached the maximum number of patient data." << endl;

        return;

    }

    else

        cout << "\nEnter Patient ID: ";
    cin >> PATID;

    if (PATID < 101 || PATID > 108) {

        cout << "Invalid input. Please select another.\n";

    }

    else

        PT[++Top] = PATID;

    return;

}

void Pop()
{

    if (Top == -1)
    {

        cout << "\nStack Underflow! Please select a Patient Data." << endl;
        return;

    }

    else
    {

        cout << "\nRemoved from the Stack is Patient " << PT[Top];
        cout << "\n";
        int temp = PT[Top];
        PT[Top] = (int)NULL;
        Top--;

        return;

    }

}

void Display()
{

    if (Top == -1)
    {

        cout << "\nStack is Empty! Please select a Patient Data." << endl;

        return;

    }

    else
    {

        system("CLS");

        cout << "Number of Patient Data is " << Top + 1 << endl;
        cout << "\n";

        for (int i = Top; i > -1; i--)
        {

            cout << "Patient ID: " << PT[Top] << endl;

            if (PT[Top] == 101)
            {

                cout << "Patient Name: Ivan Gonzales" << endl;
                cout << "Date of Birth: December 25, 2001" << endl;
                cout << "Patient Doctor: Dr. William A. Abdu, M.D, M.S" << endl;
                cout << "Billing Amount: 1,000,000 PHP" << endl;

            }

            else if (PT[Top] == 102)
            {

                cout << "Patient Name: Exequiel Garcia" << endl;
                cout << "Date of Birth: March 9, 2003" << endl;
                cout << "Patient Doctor: Dr. William A. Abdu, M.D, M.S" << endl;
                cout << "Billing Amount: 549,999 PHP" << endl;

            }

            else if (PT[Top] == 103)
            {

                cout << "Patient Name: Mary Grace Manalo" << endl;
                cout << "Date of Birth: January 1, 2002" << endl;
                cout << "Patient Doctor: Dr. William A. Abdu, M.D, M.S" << endl;
                cout << "Billing Amount: 999,999 PHP" << endl;

            }

            else if (PT[Top] == 104)
            {

                cout << "Patient Name: Daniela Mhaey Buendia" << endl;
                cout << "Date of Birth: November 1, 2002" << endl;
                cout << "Patient Doctor: Dr. William A. Abdu, M.D, M.S" << endl;
                cout << "Billing Amount: 449,599 PHP" << endl;

            }

            else if (PT[Top] == 105)
            {

                cout << "Patient Name: Raeneil Sengco" << endl;
                cout << "Date of Birth: June 25, 2001" << endl;
                cout << "Patient Doctor: Dr. William A. Abdu, M.D, M.S" << endl;
                cout << "Billing Amount: 69,000 PHP" << endl;

            }

            else if (PT[Top] == 106)
            {

                cout << "Patient Name: Julian Tuazon" << endl;
                cout << "Date of Birth: February 25, 2001" << endl;
                cout << "Patient Doctor: Dr. William A. Abdu, M.D, M.S" << endl;
                cout << "Billing Amount: 129,000 PHP" << endl;

            }

            else if (PT[Top] == 107)
            {

                cout << "Patient Name: Johnren Enriquez" << endl;
                cout << "Date of Birth: April 20, 2000" << endl;
                cout << "Patient Doctor: Dr. William A. Abdu, M.D, M.S" << endl;
                cout << "Billing Amount: 420,000 PHP" << endl;

            }

            else if (PT[Top] == 108)
            {

                cout << "Patient Name: Patrisha Rodriguez" << endl;
                cout << "Date of Birth: November 2, 2000" << endl;
                cout << "Patient Doctor: Dr. William A. Abdu, M.D, M.S" << endl;
                cout << "Billing Amount: 599,500 PHP" << endl;

            }

            cout << "\n";
            Top--;

        }

        return;

    }

}
int stackArray()
{
    system("cls");
    int PATDATA;
    TopValue();
    cout << "STACK USING ARRAYS\n";
    cout << "========================\n" << endl;

    cout << "| Patient ID |      Patient Name     |   Date of Birth   |         Patient Doctor        | Billing Amount |\n";
    cout << "-----------------------------------------------------------------------------------------------------------\n";
    cout << "|    101     | Ivan Gonzales         | December 25, 2001 | Dr. William A. Abdu, M.D, M.S |  1,000,000 PHP |\n";
    cout << "-----------------------------------------------------------------------------------------------------------\n";
    cout << "|    102     | Exequiel Garcia       | March 9, 2003     | Dr. William A. Abdu, M.D, M.S |  549,999 PHP   |\n";
    cout << "-----------------------------------------------------------------------------------------------------------\n";
    cout << "|    103     | Mary Grace Manalo     | January 1, 2002   | Dr. William A. Abdu, M.D, M.S |  999,999 PHP   |\n";
    cout << "-----------------------------------------------------------------------------------------------------------\n";
    cout << "|    104     | Daniela Mhaey Buendia | November 1, 2002  | Dr. William A. Abdu, M.D, M.S |  449,599 PHP   |\n";
    cout << "-----------------------------------------------------------------------------------------------------------\n";
    cout << "|    105     | Raeneil Sengco        | June 25, 2001     | Dr. William A. Abdu, M.D, M.S |  69,000 PHP    |\n";
    cout << "-----------------------------------------------------------------------------------------------------------\n";
    cout << "|    106     | Julian Tuazon         | February 25, 2001 | Dr. William A. Abdu, M.D, M.S |  129,000 PHP   |\n";
    cout << "-----------------------------------------------------------------------------------------------------------\n";
    cout << "|    107     | Johnren Enriquez      | April 20, 2000    | Dr. William A. Abdu, M.D, M.S |  420,000 PHP   |\n";
    cout << "-----------------------------------------------------------------------------------------------------------\n";
    cout << "|    108     | Patrisha Rodriguez    | November 2, 2000  | Dr. William A. Abdu, M.D, M.S |  599,500 PHP   |\n";
    cout << "-----------------------------------------------------------------------------------------------------------\n";

    while (1) {

        cout << "\ (1) - Select Patient\n";
        cout << " (2) - Remove Patient Data Selection\n";
        cout << " (3) - Display Selected Patient Data\n";
        cout << " (4) - Exit to main menu\n";
        cout << "\nInput choice: ";
        cin >> PATDATA;

        switch (PATDATA)
        {

        case 1: Push(); break;

        case 2: Pop(); break;

        case 3: Display(); break;
        case 4: return 0;  break;

        default: cout << "\nInvalid input, try again.\n";

        }

    }

    system("pause");

}
