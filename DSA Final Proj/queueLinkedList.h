#include <iostream>
using namespace std;
struct node {
    int data;
    struct node* next;
};
struct node* frontPATID = NULL;
struct node* rearPATID = NULL;
struct node* temp;
void Insert() {
    int val;
    cout << "Insert Patient ID to enqueue : " << endl;
    cin >> val;
    if (rearPATID == NULL) {
        rearPATID = (struct node*)malloc(sizeof(struct node));
        rearPATID->next = NULL;
        rearPATID->data = val;
        frontPATID = rearPATID;
    }
    else {
        temp = (struct node*)malloc(sizeof(struct node));
        rearPATID->next = temp;
        temp->data = val;
        temp->next = NULL;
        rearPATID = temp;
    }

}
void Delete() {
    temp = frontPATID;
    if (frontPATID == NULL) {
        cout << "Underflow" << endl;
        system("pause");
        return;
    }
    else
        if (temp->next != NULL) {
            temp = temp->next;
            cout << "Patient ID deleted from queue is : " << frontPATID->data << endl;
            free(frontPATID);
            frontPATID = temp;
        }
        else {
            cout << "Patient ID deleted from queue is : " << frontPATID->data << endl;
            free(frontPATID);
            frontPATID = NULL;
            rearPATID = NULL;
        }

    system("pause");
}
void DisplayQLL() {

    temp = frontPATID;
    if ((frontPATID == NULL) && (rearPATID == NULL)) {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Patient IDs in queue are: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    
    cout << endl;
    system("pause");
}
int queueLinkedList() {
    int ch;
    do {
        system("cls");
        cout << "QUEUE USING LINKEDLIST\n";
        cout << "========================\n" << endl;
        cout << "1) Insert Patient ID to queue" << endl;
        cout << "2) Dequeue Patient ID" << endl;
        cout << "3) Display all the Patient IDs in queue" << endl;
        cout << "4) Exit" << endl;
    
        cout << "Enter your choice : " << endl;
        cin >> ch;
        switch (ch) {
        case 1: Insert();
            break;
        case 2: Delete();
            break;
        case 3: DisplayQLL();
            break;
        case 4: cout << "Exit" << endl;
            break;
        default: cout << "Invalid choice" << endl;
        }
    } while (ch != 4);
    return 0;
}