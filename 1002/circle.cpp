#include <iostream>
#include <math.h>

using namespace std;

double areaCirculo(double r)
{
    double pi = 3.14159;
    return pi * pow(r, 2);
}

int main()
{
    double raio;

    cin >> raio;

    printf("A=%.4f\n", areaCirculo(raio));

    return 0;
}
