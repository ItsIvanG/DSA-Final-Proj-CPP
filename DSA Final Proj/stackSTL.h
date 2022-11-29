#include <iostream>
#include <stack>

using namespace std;
    
    void stackSTL() {

        stack<string> stack;

        stack.push("PHP 84,599");
        stack.push("Dr. Ivan Gonzales");
        stack.push("March 9, 2003");
        stack.push("Exequiel G. Garcia");
        stack.push("Patient 103");

        cout << "\t\t\t\t\t\t ----------------\n";
        cout << "\t\t\t\t\t\t | PATIENT DATA |\n";
        cout << "\t\t\t\t\t\t ----------------\n\n";

        cout << "\t\t\t\t\t Patient ID:     " << stack.top() << endl;

        stack.pop();

        cout << "\t\t\t\t\t Patient Name:   " << stack.top() << endl;

        stack.pop();

        cout << "\t\t\t\t\t Date of Birth:  " << stack.top() << endl;;

        stack.pop();

        cout << "\t\t\t\t\t Patient Doctor: " << stack.top() << endl;;

        stack.pop();

        cout << "\t\t\t\t\t Billing Amount: " << stack.top() << endl;;

        stack.pop();

        if (stack.empty()) {

            cout << "\n\t\t\t\t\t Stack is Now Empty." << endl;

        }

        else {

            cout << "\t\t\t\t\t Stack is Not Empty" << endl;

        }

}