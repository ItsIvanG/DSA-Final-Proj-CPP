#include<iostream>
using namespace std;

void bubbleSort();
void selectionSort();
void sortAlgosMenu() {
    int ch;
    system("cls");
    cout << "Sorting Algorithms - Sub Menu" << endl;
    cout << "=================" << endl;
    cout << "[1] Bubble Sort" << endl;
    cout << "[2] Selection Sort" << endl;
    cout << "[3]  " << endl;
    cout << "[0] Back to Main Menu" << endl;
    cout << "=================" << endl;
    cout << "Enter your Choice -> ";
    cin >> ch;
    cin.ignore();
    cout << "=================" << endl;
    system("cls");

    switch (ch) {
        case 1: bubbleSort(); break;
        case 2: selectionSort(); break;
        case 3: break;
        case 0: cout << "System Terminated..."; break;
        default: {
            cout << "Invalid Choice! Press any key..." << endl;
            system("pause");
            sortAlgosMenu();
        }
    }
}



void bubbleSort()
{
    const int Maximum = 15;
    int PATID[Maximum], r, s, e, temp, n, xchanges;



    cout << "New Patient/s amount: ";
    cin >> n;
    for (r = 0; r < n; r++)
    {
        cout << "\n\n\nPatient ID " << r + 1 << ":";
        cin >> PATID[r];
    }



    cout << "\n\nUnsorted List: ";
    for (r = 0; r < n; r++) {
        cout << PATID[r] << " ";
    }




    for (r = 0; r < n - 1; r++) {
        xchanges = 0;
        for (s = 0; s < n - r - 1; s++) {
            if (PATID[s] > PATID[s + 1]) {
                temp = PATID[s];
                PATID[s] = PATID[s + 1];
                PATID[s + 1] = temp;
                xchanges++;
            }
        }



        if (xchanges == 0) {
            break;
        }



        cout << "\n";
        cout << "\nAfter Pass " << r + 1 << ", values are: ";



        for (e = 0; e < n; e++) {
            cout << PATID[e] << " ";
        }
        cout << "\n";



    }
    cout << "\nSorted List: ";
    for (r = 0; r < n; r++) {
        cout << PATID[r] << " ";
    }
    cout << "\n";
    system("pause");

}


void selectionSort()
{
    const int Maximum = 20;
    int PATID[Maximum], m, z, temp, n, smallest;



    cout << "New Patient/s amount: ";
    cin >> n;
    for (m = 0; m < n; m++) {
        cout << "\n\nPatient ID " << m + 1 << ":";
        cin >> PATID[m];
    }



    cout << "\n\nUnsorted Lists: ";
    for (m = 0; m < n; m++) {
        cout << PATID[m] << " ";
    }




    for (m = 0; m < n - 1; m++) {
        smallest = m;
        for (z = m; z < n; z++) {
            if (PATID[smallest] > PATID[z])
                smallest = z;
        }
        if (m != smallest) {
            temp = PATID[m];
            PATID[m] = PATID[smallest];
            PATID[smallest] = temp;
        }
        cout << "\n";
        cout << "\nAfter Pass " << m + 1 << ", values are: ";
        for (z = 0; z < n; z++)
            cout << PATID[z] << " ";
        cout << "\n";
    }



    cout << "\nSorted Lists: ";
    for (m = 0; m < n; m++) {
        cout << PATID[m] << " ";
    }
    system("pause");

}