#include <iostream>

using namespace std;

int dif(int a, int b, int c, int d)
{
    return ((a * b) - (c * d));
}

int main()
{
    int A, B, C, D;

    cin >> A >> B >> C >> D;

    printf("DIFERENCA = %d\n", dif(A, B, C, D));

    return 0;
}
