#include <iostream>

using namespace std;

double media(double a, double b)
{
    return ((a * 3.5) + (b * 7.5)) / 11;
}

int main()
{
    double x, y;

    cin >> x >> y;

    printf("MEDIA = %.5f\n", media(x, y));

    return 0;
}
