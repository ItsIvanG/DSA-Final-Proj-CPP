#include<iostream>
#include <queue>
using namespace std;

int queueSTL()
{
    queue<int> PATID;
    int n;
        system("cls");
    cout << "QUEUE IN STL\n";
    cout << "========================" << endl;
    cout << "Enter amount of patients to queue: ";
    cin >> n;
    for (int i = 0; i < n; i++)

    {
        cout << "Admit Patient ID ("<<i+1<<"): ";
        int x;
        cin >> x;
        PATID.push(x);
    }

    cout << "Number of patients to discharge: " << PATID.size() << endl;

    while (!PATID.empty())
    {
        cout << "Discharge Patient ID " << PATID.front() << endl;

        PATID.pop();
    }

    system("pause");
    return 0;


}