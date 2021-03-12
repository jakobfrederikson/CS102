#include <iostream>
using namespace std;

int main()
{
    string studentName, id;
    float grade1, grade2, grade3, avrg, sum, minGr = 1000, maxGr = 0;
    int i, allGrades, studentTotal;

    cout << "Enter class size: ";
    cin >> studentTotal;

    for (i = 0; i < studentTotal; i++) {
        cout << "Enter student ID, name and marks for assignments 1, 2 and 3: ";
        cin >> id >> studentName >> grade1 >> grade2 >> grade3;

        sum = grade1 + grade2 + grade3;
        avrg = sum / 3;

        cout << "\n" << id << " " << studentName << " " << grade1 << " " << grade2 << " " << grade3 << " " << sum << " " << avrg << endl << endl;

        if (avrg > maxGr) {
            maxGr = avrg;
        }

        if (avrg < minGr) {
            minGr = avrg;
        }
    }

    cout << "Highest average grade in the class is " << maxGr;
    cout << "\nLowest average grade in the class is " << minGr << endl;

}