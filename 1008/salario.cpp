#include <iostream>

using namespace std;

double salario(int horas, double porhora)
{
    return porhora * horas;
}

int main()
{
    int horas, numero;
    double porhora;

    cin >> numero >> horas >> porhora;

    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2f\n", salario(horas, porhora));

    return 0;
}
