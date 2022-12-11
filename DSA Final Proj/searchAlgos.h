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
    int PATID[50], size, item, i, pos;
    cout << "LINEAR SEARCH" << endl;
    cout << "========================" << endl;
    cout << "Enter number of Patient IDs =";
    cin >> size;
    cout << "Enter Patient IDs =";
    for (i = 0; i < size; i++)
        cin >> PATID[i];
    cout << "Enter Patient ID to be searched=";
    cin >> item;
    pos = linear(PATID, size, item);
    if (pos == -1)
        cout << "Patient ID not Found";
    else
        cout << "Patient ID Found at=" << (pos + 1);

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
    cout << "BINARY SEARCH" << endl;
    cout << "========================" << endl;
    int PATID[50], size, item, i, pos;
    cout << "Enter number of Patient IDs=";
    cin >> size;
    cout << "Enter Patient IDs =";
    for (i = 0; i < size; i++)
        cin >> PATID[i];
    cout << "Enter Patient ID to be searched=";
    cin >> item;

    pos = Binary(PATID, size, item);

    if (pos == -1)
        cout << "Patient ID not Found";
    else
        cout << "Patient ID Found at=" << (pos + 1);
    
    cout << endl;
    system("pause");

}


int interpolationSearch(int arr[], int lo, int hi, int x)
{
    int pos;

    if (lo <= hi && x >= arr[lo] && x <= arr[hi]) {

        pos = lo
            + (((double)(hi - lo) / (arr[hi] - arr[lo]))
                * (x - arr[lo]));

        if (arr[pos] == x)
            return pos;

        if (arr[pos] < x)
            return interpolationSearch(arr, pos + 1, hi, x);

        if (arr[pos] > x)
            return interpolationSearch(arr, lo, pos - 1, x);
    }
    return -1;
}
void interpolationDemo()
{
    system("CLS");
    cout << "INTERPOLATION SEARCH" << endl;
    cout << "========================" << endl;
    int PATID[] = { 10, 12, 13, 16, 18, 19, 20, 21,
                22, 23, 24, 33, 35, 42, 47 };

    int n = sizeof(PATID) / sizeof(PATID[0]);

    cout << "Patient IDs: \n";
    for (int x : PATID)
        cout << x << " ";
    cout << "\n\nEnter query: \n";
    int x;
    cin >> x;

    int index = interpolationSearch(PATID, 0, n - 1, x);



    if (index != -1)
        cout << "Patient ID found at index " << index<<endl;
    else
        cout << "Patient ID not found.\n";
    system("PAUSE");

}


void searchAlgos() {
    system("cls");
    cout << "SEARCH ALGORITHMS\n";
    cout << "========================\n" << endl;
	cout << "[1] Linear Search\n[2] Binary Search\n[3] Interpolation Search\n";
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
    case 3:
        interpolationDemo();
        break;
    default:
        break;
    }
}