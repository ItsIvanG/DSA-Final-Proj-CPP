#include <iostream>
using namespace std;

const int queueMax = 20;

int PATID[queueMax];
int rear = -1;
int front = -1;
void insert() {
	int added_item;
	if (rear == queueMax - 1) {
		cout << "\nQueue overflow" << endl;
		system("pause");
		return;
	}
	else {
		if (front == -1)
			front = 0;
		cout << "\nInput Patient ID to add in queue" << endl;
		cin >> added_item;
		rear = rear + 1;
		PATID[rear] = added_item;
	}
}
void del() {
	if (front == -1 || front > rear) {
		cout << "\nQueue underflow" << endl;
		system("pause");
		return;
	}
	else {
		cout << "\nPatient ID dequeued: "<< PATID[front]<<endl;
		front++;
	}
	system("pause");
}
void display() {
	int i;
	if (front == -1 || front > rear) {
		cout << "\nQueue is empty." << endl;
		system("pause");
		return;
	}
	else {
		cout << "\nPatient IDs in queue : ";
		for (i = front; i <= rear; i++)
			cout << PATID[i] << " ";
		cout << "\n";
	}
	system("pause");
}
void queueArray() {
	int choice;
	int loop = 1;
	while (loop == 1) {
		system("cls");
		cout << "QUEUE USING ARRAY\n";
		cout << "========================\n" << endl;
		cout << "[1] Insert Patient ID to queue\n";
		cout << "[2] Dequeue Patient ID\n";
		cout << "[3] Display all Patient IDs in queue\n";
		cout << "[4] Quit\n";
		cout << "Choice -> ";
		cin >> choice;
		switch (choice) {
		case 1: insert(); break;
		case 2: del(); break;
		case 3: display(); break;
		case 4: loop = 0; break;
		default:  cout << "Wrong choice"; break;
		}
	}

}
