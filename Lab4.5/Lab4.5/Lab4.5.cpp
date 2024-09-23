#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
    double R, x, y;

    srand((unsigned)time(NULL));

    for (int i = 0; i < 1; i++) 
    {
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;
        cout << "R = "; cin >> R;

        if (x <= R && y <= R && x >= 0 && y >= 0 ||
            x >= -R && ((x + R) * (x + R) + (y - R) * (y - R) >= (R * R)) && x <= 0 && y >= 0 ||
            x >= -R && y >= -R && x <= 0 && y <= 0 ||
            x <= R && ((x - R) * (x - R) + (y + R) * (y + R) >= R * R && x >= 0 && y <= 0))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    cout << endl << fixed;

    for (int i = 0; i < 10; i++)
    {
        x = -2*R + static_cast<double>(rand()) / RAND_MAX * (2 * R);
        y = -2*R + static_cast<double>(rand()) / RAND_MAX * (2 * R);

        if (x <= R && y <= R && x >= 0 && y >= 0 ||
            x >= -R && ((x + R) * (x + R) + (y - R) * (y - R) >= (R * R)) && x <= 0 && y >= 0 ||
            x >= -R && y >= -R && x <= 0 && y <= 0 ||
            x <= R && ((x - R) * (x - R) + (y + R) * (y + R) >= R * R && x >= 0 && y <= 0))
        {
            cout << setw(8) << setprecision(4) << x << " "
                << setw(8) << setprecision(4) << y << " " << "Yes" << endl;
        }
        else
        {
            cout << setw(8) << setprecision(4) << x << " "
                << setw(8) << setprecision(4) << y << " " << "No" << endl;
        }
    }

    return 0;
}
