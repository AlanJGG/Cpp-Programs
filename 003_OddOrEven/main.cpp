#include <iostream>

bool isEven(int);

int main(void)
{
    int number;

    std::cout << "Ingrese un numero para determinar si es par o impar: ";
    std::cin >> number;
    std::cout << (isEven(number) ? "El numero es par" : "El numero es impar") << std::endl;

    return 0;
}

bool isEven(int number)
{
    return (number % 2 == 0);
}