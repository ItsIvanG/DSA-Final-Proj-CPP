#include <iostream>
#include <stdlib.h>
using namespace std;

void viewMembers() {
    system("CLS");
    string namesMembers[] = { "Gonzales, Ivan S."     ,
                "Manalo, Mary Grace C."               ,
                "Buendia, Daniela Mhaey F."           ,
                "Garcia, Exequiel G."                 ,
                "Enriquez, John Ren P."               ,
                "Tuazon, Julian Madison C."           ,
                "Rodriguez, Patrisha Marie"           ,
                "Sengco, Raeneil P." };               

       cout<<"[1] Group Leader\n"          ;
       cout<<"[2] Member 1\n" ;
       cout<<"[3] Member 2\n" ;
       cout<<"[4] Member 3\n" ;
       cout<<"[5] Member 4\n" ;
       cout<<"[6] Member 5\n" ;
       cout<<"[7] Member 6\n" ;
       cout<<"[8] Member 7\n" ;
       cout<<"[0] Back to Main Menu\n"     ;

    int answer;
    cin >> answer;
    if (answer > 0 && answer < sizeof(namesMembers) / sizeof(namesMembers[0])) {
        cout << namesMembers[answer - 1]<<endl;
        system("pause");
        viewMembers();
    }
    else  {
        cout << "Invalid input.\n";
        system("pause");
        viewMembers();
    }
}
void mainMenu() {
    system("CLS");
	cout<<"[1] Arrays & Pointers"			<< endl;
	cout<<"[2] Linked List"					<< endl;
	cout<<"[3] Stack Data Structure"		<< endl;
	cout<<"[4] Queue Data Structure"		<< endl;
	cout<<"[5] Search & Sorting Algorithm"	<< endl;
	cout<<"[6] Hash Table"					<< endl;
	cout<<"[7] Tree Data Structure"			<< endl;
	cout<<"[8] Group Members"				<< endl;
	cout<<"[0] Exit"						<< endl;
    int answer;
    cin >> answer;
    switch (answer) {

    case 0:
        //exit
        break;
    case 1:
        //arrays
        break;
    case 2:
        //linkedlist
        break;
    case 3:
        //stack
        break;
    case 4:
        //queue
        break;
    case  5:
        //search
        break;
    case 6:
        //hash
        break;
    case 7:
        //tree
        break;
    case 8:
        //group members
        viewMembers();
        mainMenu();
        break;
    default:
        cout<<("Invalid Choice Selected.");
        break;

    }
}


int main() {
	mainMenu();
}
