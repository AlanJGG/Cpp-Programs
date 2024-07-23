#include <iostream>

int main(void)
{
    int a, b, resultado;
    int choice;

    std::cout << "Ingrese dos numeros: ";
    std::cin >> a >> b;

    std::cout << "1: Suma\n2: Resta\n3: Multiplicacion\n4: Division\n";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        resultado = a + b;
        break;
    case 2:
        resultado = a - b;
        break;
    case 3:
        resultado = a * b;
        break;
    case 4:
        resultado = a / b;
        break;
    default:
        break;
    }

    std::cout << "El resultado es: " << resultado << std::endl;

    return 0;
}