#include <iostream>

int main(void)
{
    int a, b, resultado = 0;

    std::cout << "Ingrese dos numeros para realizar la suma: ";
    std::cin >> a >> b;

    resultado = a + b;

    std::cout << "Resultado: " << resultado << std::endl;

    return 0;
}