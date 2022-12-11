#include <iostream>

using namespace std;
void Pointers()
{
   
    system("cls"); 
    cout << "ARRAY POINTERS\n";
    cout << "========================\n" << endl;
    int PATID = 10920;
    int* b;
    int** c;

    b = &PATID;
    cout << "PATIENT'S ID NUMBER    : " << PATID << endl;
    cout << "The address of PATIENT NUMBER " << PATID << " is " << &PATID << endl;
    cout << endl;

    *b = 10921;
    cout << "PATIENT'S ID NUMBER    : " << *b << endl;
    cout << "The content of PATIENT NUMBER " << *b << " is " << b << endl;
    cout << "The address of PATIENT NUMBER  " << *b << " is " << &b << endl;
    cout << endl;

    c = &b;
    **c = 10922;
    cout << "PATIENT'S ID NUMBER    : " << **c << endl;
    cout << "The content of PATIENT NUMBER " << **c << " is " << c << endl;
    cout << "The address of PATIENT NUMBER  " << **c << " is " << &c << endl;
    cout << endl;

    cout << "\nPress any key to go back to Array & Pointers Menu...";
    system("pause");

} //end main