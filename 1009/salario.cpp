#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nome;
    double salario, vendas;

    cin >> nome >> salario >> vendas;

    printf("TOTAL = R$ %.2f\n", salario + (0.15 * vendas));

    return 0;
}
