#include <iostream>
#include <list>
#include <string>
using namespace std;
void linkedListSTL() {
	list<string> ll;
	system("cls");
	int n;
	cout << "Enter Linked List items: \n";
	cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a;
        cout << ("Enter Patient ID No.: ");
        getline(cin, a);
        ll.push_front(a);
        cout << ("Enter Patient Name: ");
        getline(cin, a);
        ll.push_front(a);
        cout << ("Enter Patient's Date of Birth: ");
        getline(cin, a);
        ll.push_front(a);
        cout << ("Enter Patient's Doctor: ");
        getline(cin, a);
        ll.push_front(a);
        cout << ("Enter Billing Amount: ");
        getline(cin, a);
        ll.push_front(a);
    }

}