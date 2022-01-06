#include <iostream>

using namespace std;

double media(double a, double b, double c)
{
    return ((a * 2) + (b * 3) + (c * 5)) / 10;
}

int main()
{
    double x, y, z;

    cin >> x >> y >> z;

    printf("MEDIA = %.1f\n", media(x, y, z));

    return 0;
}
