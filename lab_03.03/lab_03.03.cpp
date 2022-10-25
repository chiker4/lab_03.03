// Lab_03_3.cpp
// <Чикеречко Андрій>
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 19
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, R;
    cout << "R = ";
    cin >> R;
    cout << "x = ";
    cin >> x;

    double y;
    if (x < -1) {
        y = x * (-1) - 1;
    }
    else if (x >= -1 && x <= 1) {
        y = 0;
    }
    else if (x > 1 && x <= (2 * R + 1)) {
        y = sqrt((2 * R - x + 1) * (x - 1));
    }
    else {
        y = (2 * R - x + 1) / (6 - 2 * R);
    }

    cout << endl;
    cout << "y = " << y << endl;

    return 0;
}