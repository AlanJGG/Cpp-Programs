#include <iostream>

void fibonacciSerie(int);

int main(void)
{
    int a;

    std::cout << "Ingrese un número para calcular su serie fibonacci: ";
    std::cin >> a;

    std::cout << "Serie: ";
    fibonacciSerie(a);
    std::cout << std::endl;

    return 0;
}

void fibonacciSerie(int number)
{
    int a = 0, b = 1, c;
    if (number > 0)
        std::cout << a << " ";
    if (number > 1)
        std::cout << b << " ";

    for (int i = 2; i < number; i++)
    {
        c = a + b;
        std::cout << c << " ";
        a = b;
        b = c;
    }
}