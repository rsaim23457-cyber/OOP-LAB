#include <iostream>
using namespace std;

// Function to calculate total obtained marks
int totalObtained(int a, int b, int c, int d, int e, int f) {
    return a + b + c + d + e + f;
}

// Function to calculate total marks
int totalMarks(int a, int b, int c, int d, int e, int f) {
    return a + b + c + d + e + f;
}

// Function to calculate percentage
float calculatePercentage(int obtained, int total) {
    return (obtained * 100.0) / total;
}

int main() {
    int pf, ict, physics, calculus, english, pak;
    int pfTotal, ictTotal, physicsTotal, calculusTotal, englishTotal, pakTotal;

    cout << "Enter obtained marks of PF: ";
    cin >> pf;

    cout << "Enter obtained marks of ICT: ";
    cin >> ict;

    cout << "Enter obtained marks of Applied Physics: ";
    cin >> physics;

    cout << "Enter obtained marks of Calculus: ";
    cin >> calculus;

    cout << "Enter obtained marks of Functional English: ";
    cin >> english;

    cout << "Enter obtained marks of Pak Studies: ";
    cin >> pak;

    cout << "\nEnter total marks of PF: ";
    cin >> pfTotal;

    cout << "Enter total marks of ICT: ";
    cin >> ictTotal;

    cout << "Enter total marks of Applied Physics: ";
    cin >> physicsTotal;

    cout << "Enter total marks of Calculus: ";
    cin >> calculusTotal;

    cout << "Enter total marks of Functional English: ";
    cin >> englishTotal;

    cout << "Enter total marks of Pak Studies: ";
    cin >> pakTotal;

    int totalOb = totalObtained(pf, ict, physics, calculus, english, pak);
    int totalMa = totalMarks(pfTotal, ictTotal, physicsTotal, calculusTotal, englishTotal, pakTotal);

    float percentage = calculatePercentage(totalOb, totalMa);

    cout << "\nTotal Obtained Marks: " << totalOb;
    cout << "\nTotal Marks: " << totalMa;
    cout << "\nPercentage: " << percentage << "%";

    return 0;
}
