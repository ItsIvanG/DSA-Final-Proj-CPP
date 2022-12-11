#include <iostream>

using namespace std;


void sampleApp(){

    
    system("cls");
    cout << "SEARCH AND SORT APPLICATION\n";
    cout << "========================" << endl;
// INSERTION SORT ALGO
    const int MAX = 20;
    int PATID[MAX], i, j, k, n;
    cout << "New Patient/s amount: ";
    cin >> n;
    for (i = 0; i < n; i++) {
        cout << "\nPatient ID " << i + 1 << ": ";
        cin >> PATID[i];

    }
    cout << "\n\nUnsorted List: ";
    for (i = 0; i < n; i++) {
        cout << PATID[i] << " ";

    }
    cout << "\n";

    for (j = 1; j < n; j++) {
        k = PATID[j];
        for (i = j - 1; i >= 0 && k < PATID[i]; i--)
            PATID[i + 1] = PATID[i];
        PATID[i + 1] = k;

    }
    cout << "\nSorted Lists: ";
    for (i = 0; i < n; i++) {
        cout << PATID[i] << " ";

    }

    // LINEAR SEARCH ALGO
    int  item,  pos;
    int size = n;
    cout << "\n\nEnter element which to be searched =";
    cin >> item;
    pos = linear(PATID, size, item);
    if (pos == -1)
        cout << "Element not Found";
    else
        cout << "Element Found at=" << (pos + 1);

    cout << endl;
    system("pause");

}
