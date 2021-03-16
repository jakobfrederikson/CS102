#include <iostream>
using namespace std;

int main()
{
    char ans;
    int menuNum;
    float side, sqrArea, sqrPerim; // square variables
    float base, height, recArea, recPerim; // rectangle and parallelogram variables
    float pi = 3.14, radius, circleArea, circlePerim; // circle variables
    float trapA, trapB, trapC, trapD, trapHeight, trapArea, trapPerim; // trapezium variables

    cout << "Area + Perimeter Calculator\n";

    Menu:
        cout << "\nEnter the number of your choice: \n1. Square\n2. Rectangle\n3. Circle\n4. Parallelogram\n5. Trapezium\n6. Exit";
        cout << "\n\n ";
        cin >> menuNum;

    if (menuNum == 1) { // square calculation
        cout << "\nEnter the length of a side(cm): ";
        cin >> side;
        sqrArea = side * side;
        sqrPerim = 4 * side;
        cout << "Area = " << sqrArea << " cm" << "\nPerimeter = " << sqrPerim << " cm\n";
    }
    else if (menuNum == 2) { // rectangle calculation
        cout << "\nEnter the base and height of the rectangle(cm): ";
        cin >> base >> height;
        recArea = base * height;
        recPerim = 2 * (base + height);
        cout << "Area = " << recArea << " cm" << "\nPerimeter = " << recPerim << " cm\n";
    }
    else if (menuNum == 3) { // circle calculation
        cout << "\nEnter the radius of the circle(cm): ";
        cin >> radius;
        circleArea = pi * radius * radius;
        circlePerim = 2 * (pi * radius);
        cout << "Area = " << circleArea << " cm" << "\nCircumference = " << circlePerim << " cm\n";
    }
    else if (menuNum == 4) { // parallelogram calculation
        cout << "\nEnter the base and height of the parallelogram(cm): ";
        cin >> base >> height;
        recArea = base * height;
        recPerim = 2 * (base + height);
        cout << "Area = " << recArea << " cm" << "\nPerimeter = " << recPerim << " cm\n";
    }
    else if (menuNum == 5) { // trapezium calculation
        cout << "\nEnter all sides of the trapezium and the height(cm): ";
        cin >> trapA >> trapB >> trapC >> trapD >> trapHeight;
        trapArea = (trapA + trapB / 2) * trapHeight;
        trapPerim = trapA + trapB + trapC + trapD;
        cout << "area = " << trapArea << " cm" << "\nPerimeter = " << trapPerim << " cm\n";
    }
    else {
        return 0;
    }

    cout << "\nContinue?(y/n)";
    cin >> ans;

    if (ans == 'n') {
        return 0;
    }
    else {
        goto Menu;
    }
}