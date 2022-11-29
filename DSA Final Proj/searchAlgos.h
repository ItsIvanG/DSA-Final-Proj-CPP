#include <iostream>

using namespace std;

int linear(int ar[], int size, int item)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (ar[i] == item)
            return i;
    }

    return -1;

}

void LinearSearch() {
    system("cls");
    int ar[50], size, item, i, pos;
    cout << "Enter number of elements=";
    cin >> size;
    cout << "Enter Array's Elements=";
    for (i = 0; i < size; i++)
        cin >> ar[i];
    cout << "Enter element which to be searched=";
    cin >> item;
    pos = linear(ar, size, item);
    if (pos == -1)
        cout << "Element not Found";
    else
        cout << "Element Found at=" << (pos + 1);

    cout << endl;
    system("pause");
}

int Binary(int ar[], int size, int item)
{
    int low, high, mid;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (item == ar[mid])
            return mid;
        else if (item < ar[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
}
void binarySearch() {
    system("cls");
    int ar[50], size, item, i, pos;
    cout << "Enter number of elements=";
    cin >> size;
    cout << "Enter Array's Elements=";
    for (i = 0; i < size; i++)
        cin >> ar[i];
    cout << "Enter element which to be searched=";
    cin >> item;

    pos = Binary(ar, size, item);

    if (pos == -1)
        cout << "Element not Found";
    else
        cout << "Element Found at=" << (pos + 1);
    
    cout << endl;
    system("pause");

}


void searchAlgos() {
    system("cls");
	cout << "[1] LinearSearch\n[2] BinarySearch\n[3] FibonacciSearch\n";
    int x;
    cin >> x;
    switch (x)
    {
    case 1:
        LinearSearch();
        break;
    case 2:
        binarySearch();
        break;
    default:
        break;
    }
}