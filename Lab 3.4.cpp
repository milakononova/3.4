
#include <iostream>
using namespace std;

int main()
{
    double x, y, R, a, b;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    cout << "Enter R: ";
    cin >> R;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    if (R <= 0 || a <= 0 || b <= 0)
    {
        cout << "Parameters must be positive." << endl;
    }
    else
    {
        bool A = (x >= 0 && x <= a &&
            y >= 0 && y <= b &&
            x * x + y * y >= R * R);

        bool B = (x <= 0 && y <= 0 &&
            x * x + y * y <= R * R);

        if (A || B)
        {
            cout << "Point belongs to the region." << endl;
        }
        else
        {
            cout << "Point does not belong to the region." << endl;
        }
    }

    return 0;
}
