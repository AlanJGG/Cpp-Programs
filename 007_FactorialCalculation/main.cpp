#include <iostream>

int factorialCalculation(int);

int main(void)
{
    int a;

    std::cout << "Ingrese un número para calcular su factorial: ";
    std::cin >> a;
    std::cout << "El resultado es: " << factorialCalculation(a) << std::endl;

    return 0;
}

int factorialCalculation(int number)
{
    if (number <= 2)
        return number;

    int result = 1;

    for (int i = number; i > 0; i--)
        result *= i;

    return result;
}