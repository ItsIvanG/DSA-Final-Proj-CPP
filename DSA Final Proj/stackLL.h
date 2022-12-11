#include <iostream>
#include <string>
using namespace std;

struct Node
{

	string PATDATA;
	Node* link;

};

Node* top;
int ctr;

void ListStack()
{

	top = NULL;
	ctr = 0;

}

void Push(string element)
{

	Node* temp = new Node();
	temp->PATDATA = element;
	temp->link = top;
	top = temp;
	ctr++;

}

string Popp()
{

	string PT;
	if (top == NULL)
	{

		cout << "Stack underflow" << endl;

	}

	else
	{

		PT = top->PATDATA;
		Node* temp = top->link;
		delete top;
		top = temp;
		ctr--;
		return PT;

	}

}

string Topp()
{

	return top->PATDATA;

}

int Size()
{

	return ctr;

}

bool isEmpty()
{

	return (top == NULL) ? true : false;

}

void stackLL()
{
	string PATID, PATNAME, DOB, PATDOC, BILLAMT;
	system("cls");
	cout << "STACK USING LINKEDLIST\n";
	cout << "========================\n" << endl;
	cin.ignore();

	if (isEmpty())
	{
		cout << "Stack is empty, please enter Patient Data into Stack" << endl;
	}

	cout << "\nEnter Patient ID: ";
	getline(cin, PATID);

	cout << "Enter Patient Name: ";
	getline(cin, PATNAME);

	cout << "Enter Date of Birth: ";
	getline(cin, DOB);

	cout << "Enter Patient Doctor: ";
	getline(cin, PATDOC);

	cout << "Enter Billing Amount: ";
	getline(cin, BILLAMT);

	Push(BILLAMT);
	Push(PATDOC);
	Push(DOB);
	Push(PATNAME);
	Push(PATID);

	system("CLS");

	cout << "Patient ID: " << Topp() << endl;
	Popp();

	cout << "Patient Name: " << Topp() << endl;
	Popp();

	cout << "Date of Birth: " << Topp() << endl;
	Popp();

	cout << "Patient Doctor: " << Topp() << endl;
	Popp();

	cout << "Billing Amount: " << Topp() << endl;
	Popp();
	//cout << "Size of stack = " << Size() << endl << endl;

	//cout << "Top element is " << Topp() << endl << endl;

	//cout << "Pop element " << Popp() << endl << endl;

	//cout << "After pop of last element " << endl;
	//cout << "List elements are: ";

	//Node* dispNode;
	//dispNode = top;
	//while (dispNode != NULL)
	//{
	//	cout << dispNode->PATDATA << "\n\n";
	//	dispNode = dispNode->link;
	//}

	cout << endl;
	system("pause");
}
