#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double R, xp, xk, dx, x, y;

    cout << "R = "; cin >> R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "-------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |" << setw(12) << "y" << " |" << endl;
    cout << "-------------------------" << endl;

    x = xp;
    while (x <= xk + dx / 2.0) {
        if (x <= -5.0) {
            y = -3.0;
        }
        else if (x <= -R) {
            // Пряма через points (-5, -3) та (-R, 0)
            y = 3.0 / (-R + 5.0) * (x + R);
        }
        else if (x <= R) {
            // Півколо з радіусом R і центром у (0, 0)
            y = sqrt(R * R - x * x);
        }
        else if (x <= 8.0) {
            // Пряма через points (R, 0) та (8, R)
            y = R / (8.0 - R) * (x - R);
        }
        else {
            y = R;
        }

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(12) << setprecision(3) << y << " |" << endl;

        x += dx;
    }

    cout << "-------------------------" << endl;

    return 0;
}