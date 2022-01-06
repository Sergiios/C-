#include <iostream>

using namespace std;

int main()
{
    int password;
    int passwordCorrect = 2002;

    while (true)
    {
        cin >> password;
        if (password == passwordCorrect)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
            printf("Senha Invalida\n");
    }

    return 0;
}
