#include <iostream>
#include <queue>

using namespace std;


// Print the queueSTL
void displayQueue(queue<int> gq)
{
    queue<int> g = gq;
    while (!g.empty()) {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}


void queueSTL() {
    system("cls");
    queue<int> PATID;
    PATID.push(10);
    PATID.push(20);
    PATID.push(30);

    cout << "The queue gquiz is : ";
    displayQueue(PATID);

    cout << "\ngquiz.size() : " << PATID.size();
    cout << "\ngquiz.front() : " << PATID.front();
    cout << "\ngquiz.back() : " << PATID.back();

    cout << "\ngquiz.pop() : ";
    PATID.pop();
    displayQueue(PATID);
    system("pause");
}


