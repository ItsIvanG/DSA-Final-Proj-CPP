#include <iostream>
using namespace std;
const int MAX = 20;
int PATID[MAX];
int rear = -1;
int front = -1;
void insert() {
	int added_item;
	if (rear == MAX - 1) {
		cout << "\nQueue overflow";
		return;
	}
	else {
		if (front == -1)
			front = 0;
		cout << "\nInput the element for ";
		cout << "adding in queue: ";
		cin >> added_item;
		rear = rear + 1;
		PATID[rear] = added_item;
	}
}
void del() {
	if (front == -1 || front > rear) {
		cout << "\nQueue overflow";
		return;
	}
	else {
		cout << "\nElement deleted from";
		cout << "the queue is: " << PATID[front];
		front++;
	}
}
void display() {
	int i;
	if (front == -1 || front > rear) {
		cout << "\nQueue overflow";
		return;
	}
	else {
		cout << "\nQueue content : ";
		for (i = front; i <= rear; i++)
			cout << PATID[i] << " ";
		cout << "\n";
	}
}
void queueArray() {
	int choice;
	while (1) {
		cout << "\n[1] Insert\n";
		cout << "[2] Delete\n";
		cout << "[3] Display\n";
		cout << "[4] Quit\n";
		cout << "Choice -> ";
		cin >> choice;
		switch (choice) {
		case 1: insert(); break;
		case 2: del(); break;
		case 3: display(); break;
		case 4: exit(1);
		default: cout << "Wrong choice";
		}
	}

}
