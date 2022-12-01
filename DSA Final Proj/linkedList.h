#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>

void SLinkedList();
void DLinkedList();
void CLinkedList();

using namespace std;
void LL()
{
    int ch;

    do {
        cout << "LINKED LISTS - Sub Menu" << endl;
        cout << "=================" << endl;
        cout << "[1] Singly Linked List" << endl;
        cout << "[2] Doubly Linked List" << endl;
        cout << "[3] Circular Linked List" << endl;
        cout << "[0] Back to Main Menu" << endl;
        cout << "=================" << endl;
        cout << "Enter your Choice -> ";
        cin >> ch;
        cin.ignore();
        cout << "=================" << endl;
        system("cls");

        switch (ch) {
        case 1: SLinkedList(); break;
        case 2: DLinkedList(); break;
        case 3: CLinkedList(); break;
        case 0: cout << "System Terminated..."; break;
        default: {
            cout << "Invalid Choice! Press any key..." << endl;
            system("PAUSE");
        }
        }
    } while (ch != 0);
}

void SLinkedList()
{
    struct Patient
    {
        string PATID = "";
        string PATNAME = "";
        string DOB = "";
        string PATDOC = "";
        double BILLAMT;
        Patient* next;  //pointer to the next student
    };                  //end struct

    Patient* head;
    head = NULL;

    string inpPATID = "";
    string inpPATNAME = "";
    string inpDOB = "";
    string inpPATDOC = "";
    double inpBILLAMT;
    system("CLS");

    cout << "=================PATIENT DATA=================" << endl;
    for (int ctr = 1; ctr <= 3; ctr++)
    {
        cout << "Enter Patient ID " << ctr << "         :   ";
        getline(cin, inpPATID);
        cout << "Enter Patient Name " << ctr << "       :   ";
        getline(cin, inpPATNAME);
        cout << "Enter Date of Birth " << ctr << "      :   ";
        getline(cin, inpDOB);
        cout << "Enter Patient's Doctor " << ctr << "   :   ";
        getline(cin, inpPATDOC);
        cout << "Enter Billing Amount " << ctr << "     :   ";
        cin >> inpBILLAMT;
        cin.ignore();
        cout << "\n\n";

        Patient* newPatient;
        Patient* patientPointer;
        newPatient = new Patient;
        newPatient->PATID = inpPATID;
        newPatient->PATNAME = inpPATNAME;
        newPatient->DOB = inpDOB;
        newPatient->PATDOC = inpPATDOC;
        newPatient->BILLAMT = inpBILLAMT;
        newPatient->next = NULL;

        if (head == NULL)
            head = newPatient;
        else
        {
            patientPointer = head;
            while (patientPointer->next)
                patientPointer = patientPointer->next;
            patientPointer->next = newPatient;
        }
    }//end for

    Patient* displayPointer;
    displayPointer = head;
    while (displayPointer)
    {
        cout << displayPointer->PATID << "\t\t";
        cout << displayPointer->PATNAME << "\t\t";
        cout << displayPointer->DOB << "\t\t";
        cout << displayPointer->PATDOC << "\t\t";
        cout << displayPointer->BILLAMT << "\t\t";
        cout << displayPointer << "\t\t";
        displayPointer = displayPointer->next;
        cout << endl;
    }//end while
    cout << "\nPress any key to go back Array Sub Menu...";
    system("PAUSE");
    system("cls");
} // end void SLinkedList

void DLinkedList()
{
    struct Patient
    {
        string PATID = "";
        string PATNAME = "";
        string DOB = "";
        string PATDOC = "";
        double BILLAMT;
        Patient* prev;  //pointer to previous student
        Patient* next;  //pointer to next student
    };                  //end struct

    Patient* head;
    head = NULL;

    string inpPATID = "";
    string inpPATNAME = "";
    string inpDOB = "";
    string inpPATDOC = "";
    double inpBILLAMT;
    Patient* newPatient;
    Patient* nextPatPointer;
    Patient* prevPatPointer;

    cout << "=================PATIENT DATA=================" << endl;
    //add the first node
    for (int ctr = 1; ctr <= 2; ctr++)
    {
        cout << "Enter Patient ID " << ctr << "         :   ";
        getline(cin, inpPATID);
        cout << "Enter Patient Name " << ctr << "       :   ";
        getline(cin, inpPATNAME);
        cout << "Enter Date of Birth " << ctr << "      :   ";
        getline(cin, inpDOB);
        cout << "Enter Patient's Doctor " << ctr << "   :   ";
        getline(cin, inpPATDOC);
        cout << "Enter Billing Amount " << ctr << "     :   ";
        cin >> inpBILLAMT;
        cin.ignore();
        cout << "\n\n";

        if (head == NULL)
        {
            newPatient = new Patient;
            newPatient->PATID = inpPATID;
            newPatient->PATNAME = inpPATNAME;
            newPatient->DOB = inpDOB;
            newPatient->PATDOC = inpPATDOC;
            newPatient->BILLAMT = inpBILLAMT;
            newPatient->prev = NULL;
            newPatient->next = NULL;

            head = newPatient;
            prevPatPointer = head;
        }
        else
        {
            // add next node with reference to first node
            nextPatPointer = new Patient;
            newPatient->PATID = inpPATID;
            newPatient->PATNAME = inpPATNAME;
            newPatient->DOB = inpDOB;
            newPatient->PATDOC = inpPATDOC;
            newPatient->BILLAMT = inpBILLAMT;
            nextPatPointer->prev = prevPatPointer;
            nextPatPointer->next = NULL;
            prevPatPointer->next = nextPatPointer;
            prevPatPointer = nextPatPointer;
        }
    } // end of for loop

    //Display contents of linked list
    Patient* displayPointer;
    displayPointer = head;

    if (displayPointer == NULL)
        cout << "no node to display" << endl;
    else
    {
        cout << "Doubly linked list is as follows: " << endl;
        while (displayPointer != NULL)
        {
            cout << "Patient ID Name: " << displayPointer->PATID << endl;
            cout << "Patient Name: " << displayPointer->PATNAME << endl;
            cout << "Date of Birth: " << displayPointer->DOB << endl;
            cout << "Patient Doctor: " << displayPointer->PATDOC << endl;
            cout << "Billing Amount: " << displayPointer->BILLAMT << endl;
            cout << " at " << displayPointer << endl << endl;
            cout << endl;
            displayPointer = displayPointer->next;
        }
    }
    cout << "\nPress any key to go back Array Sub Menu...";
    system("PAUSE");
}//end void DLinkedList

struct Patient
{
    string PATID = "";
    string PATNAME = "";
    string DOB = "";
    string PATDOC = "";
    double BILLAMT;
    Patient* next;
};

void printList(Patient* displayPointer)
{
    while (displayPointer != NULL)
    {
        cout << "\nPatient ID    : " << displayPointer->PATID << endl;
        cout << "Patient Name  : " << displayPointer->PATNAME << endl;
        cout << "Date of Birth : " << displayPointer->DOB << endl;
        cout << "Patient Doctor: " << displayPointer->PATDOC << endl;
        cout << "Billing Amount: " << displayPointer->BILLAMT << endl;
        cout << endl;
        displayPointer = displayPointer->next;
        system("pause");
        cout << endl;
    }
}
void CLinkedList()
{

    Patient* head = new Patient();
    Patient* second = new Patient();
    Patient* third = new Patient();
    Patient* fourth = new Patient();
    Patient* fifth = new Patient();

    cout << "=================PATIENT DATA=================" << endl;
    cout << "Enter Patient ID 1" << "         :   ";
    getline(cin, head->PATID);
    cout << "Enter Patient Name 1" << "       :   ";
    getline(cin, head->PATNAME);
    cout << "Enter Date of Birth 1" << "      :   ";
    getline(cin, head->DOB);
    cout << "Enter Patient's Doctor 1" << "   :   ";
    getline(cin, head->PATDOC);
    cout << "Enter Billing Amount 1" << "     :   ";
    cin >> head->BILLAMT;
    cin.ignore();
    head->next = second;

    cout << "\nEnter Patient ID 2" << "         :   ";
    getline(cin, second->PATID);
    cout << "Enter Patient Name 2" << "       :   ";
    getline(cin, second->PATNAME);
    cout << "Enter Date of Birth 2" << "      :   ";
    getline(cin, second->DOB);
    cout << "Enter Patient's Doctor 2" << "   :   ";
    getline(cin, second->PATDOC);
    cout << "Enter Billing Amount 2" << "     :   ";
    cin >> second->BILLAMT;
    cin.ignore();
    second->next = third;

    cout << "\nEnter Patient ID 3" << "         :   ";
    getline(cin, third->PATID);
    cout << "Enter Patient Name 3" << "       :   ";
    getline(cin, third->PATNAME);
    cout << "Enter Date of Birth 3" << "      :   ";
    getline(cin, third->DOB);
    cout << "Enter Patient's Doctor 3" << "   :   ";
    getline(cin, third->PATDOC);
    cout << "Enter Billing Amount 3" << "     :   ";
    cin >> third->BILLAMT;
    cin.ignore();
    third->next = fourth;

    cout << "\nEnter Patient ID 4" << "         :   ";
    getline(cin, fourth->PATID);
    cout << "Enter Patient Name 4" << "       :   ";
    getline(cin, fourth->PATNAME);
    cout << "Enter Date of Birth 4" << "      :   ";
    getline(cin, fourth->DOB);
    cout << "Enter Patient's Doctor 4" << "   :   ";
    getline(cin, fourth->PATDOC);
    cout << "Enter Billing Amount 4" << "     :   ";
    cin >> fourth->BILLAMT;
    cin.ignore();
    fourth->next = fifth;


    cout << "\nEnter Patient ID 5" << "         :   ";
    getline(cin, fifth->PATID);
    cout << "Enter Patient Name 5" << "       :   ";
    getline(cin, fifth->PATNAME);
    cout << "Enter Date of Birth 5" << "      :   ";
    getline(cin, fifth->DOB);
    cout << "Enter Patient's Doctor 5" << "   :   ";
    getline(cin, fifth->PATDOC);
    cout << "Enter Billing Amount 5" << "     :   ";
    cin >> fifth->BILLAMT;
    cin.ignore();
    fifth->next = head;

    system("cls");
    cout << "=================" << endl;
    cout << "\n\Circular linked list is as follows: " << endl;
    printList(head);

}
